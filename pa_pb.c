/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:21:54 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/27 18:41:50 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node	**stack_a, t_node	**stack_b)
{
	t_node	*temp;
	
	if (*stack_a)
	{
		ft_lstadd_front(stack_b, ft_lstnew((*stack_a)->num));
		temp = *stack_a;
		(*stack_a) = (*stack_a)->next;
		free(temp);
		write(1, "pb\n", 3);
	}
}

void	pa(t_node	**stack_b, t_node	**stack_a)
{
	t_node	*temp;
	
	if (*stack_b)
	{
		ft_lstadd_front(stack_a, ft_lstnew((*stack_b)->num));
		temp = *stack_b;
		(*stack_b) = (*stack_b)->next;
		free(temp);
		write(1, "pa\n", 3);
	}
}