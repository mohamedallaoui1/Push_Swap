/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useful_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:49:38 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/29 14:57:07 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *copy_list(t_node *a)
{
    t_node  *new;
    t_node  *temp;

    new = NULL;
    temp = a;
    while (temp)
    {
        ft_lstadd_back(&new, ft_lstnew(temp->num));
        temp = temp->next;
    }
    return (new);
}

void    indexation(t_node   **a)
{
    t_node  *temp;
    t_node  *temp1;
    t_node  *temp2;
    t_node  *temp3;
    int     i;

    temp1 = *a;
    temp = sort_func(copy_list(*a));
    temp2 = temp;
    i = 0;
    while (temp)
    {
        while (temp1)
        {
            if (temp1->num == temp->num)
            {
                temp1->index = i;
                break;
            }
            temp1 = temp1->next;
        }
        i++;
        temp1 = *a;
        temp = temp->next;
    }

    while (temp2)
    {
        temp3 = temp2;
        temp2 = temp2->next;
        free(temp3);
    }
    
}