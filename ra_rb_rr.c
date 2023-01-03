/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:03:47 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/14 17:29:01 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_node **stack_a)
{
    t_node  *temp;

    temp = *stack_a;
    
    *stack_a = (*stack_a)->next;
    temp->next = NULL;
    ft_lstadd_back(stack_a, temp);
    write(1, "ra\n", 3);
}

void    rb(t_node **stack_b)
{
    t_node  *temp;

    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = NULL;
    ft_lstadd_back(stack_b, temp);
    write(1, "rb\n", 3);
}

void    rr(t_node **a, t_node **b)
{
    ra(a);
    rb(b);
    write(1, "rr\n", 3);
}