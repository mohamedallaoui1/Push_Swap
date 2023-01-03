/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:00:27 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/13 15:56:21 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mallaoui/Desktop/Push_Swap/push_swap.h"

t_node	*ft_lstlast(t_node *lst)
{
	t_node	*temp;

	temp = lst;
	if (!lst)
		return (NULL);
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
