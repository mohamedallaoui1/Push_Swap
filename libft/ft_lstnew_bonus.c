/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:12:22 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/11 18:22:49 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mallaoui/Desktop/Push_Swap/push_swap.h"

t_node	*ft_lstnew(int content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->num = content;
	new->next = NULL;
	return (new);
}
