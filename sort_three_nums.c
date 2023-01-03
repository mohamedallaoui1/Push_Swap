/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_nums.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:27:37 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/23 15:04:15 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_node	*a)
{
	int	*arr;
	int	i;
	int	k;
	int	max;

	i = 0;
	k = 0;
	arr = list_to_array(a);
	max = arr[0];
	while (i < ft_lstsize(a))
	{
		if (arr[i] > max)
		{
			k = i;
			max = arr[i];
		}
		i++;
	}
	free(arr);
	return (k);
}

void	sort_three_nums(t_node	**a)
{
	int	pos;

	pos = find_max(*a);
	if (ft_lstsize(*a) == 3)
	{
		if (pos == 0)
			ra(a);
		if (pos == 1)
			rra(a);
		if ((*a)->num > (*a)->next->num)
			sa(*a);
	}
}
