/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:28:37 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/15 14:37:46 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **stack_a)
{
	t_node	*temp;
	t_node	*temp1;

	temp = *stack_a;
	if (temp->next == NULL)
		return ;
	if (*stack_a)
	{
		temp = ft_lstlast(*stack_a);
	
		ft_lstadd_front(stack_a, ft_lstnew(temp->num));
		temp1 = *stack_a;
		while (temp1->next->next != NULL)
			temp1 = temp1->next;
		temp1->next = NULL;
		free(temp);
		write(1, "rra\n", 4);
	}
}

void	rrb(t_node **stack_b)
{
	t_node	*temp;
	t_node	*temp1;

	temp = *stack_b;
	if (temp->next == NULL)
		return ;
	if (*stack_b)
	{
		temp = ft_lstlast(*stack_b);
	
		ft_lstadd_front(stack_b, ft_lstnew(temp->num));
		temp1 = *stack_b;
		while (temp1->next->next != NULL)
			temp1 = temp1->next;
		temp1->next = NULL;
		free(temp);
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if (*stack_a && *stack_b)
	{
		rra(stack_a);
		rrb(stack_b);
		write(1, "rrr\n", 4);
	}
}