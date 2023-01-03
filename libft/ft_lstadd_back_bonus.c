/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:41:51 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/11 18:13:21 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mallaoui/Desktop/Push_Swap/push_swap.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*tmp;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
