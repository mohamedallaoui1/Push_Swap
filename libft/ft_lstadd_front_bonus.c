/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:00:34 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/12 17:14:28 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mallaoui/Desktop/Push_Swap/push_swap.h"

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
