/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten_nums_orless.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:38:09 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/23 15:18:32 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_position(t_node *a, int min)
{
    int *arr;
    int i;

    if (!(a))
        return (-1);
    arr = list_to_array(a);
    i = 0;
    while (i < ft_lstsize(a))
    {
        if (arr[i] == min)
            break;
        i++;
    }
    free(arr);
    return i;
}

int     find_min(t_node *a)
{
    int     min;
    int     *arr;
    int     i;

    if (!(a))
        return (0);
    arr = list_to_array(a);
    min = arr[0];
    i = 0;
    while (i < ft_lstsize(a))
    {
        if (arr[i] < min)
            min = arr[i];
        i++;
    }
    free(arr);
    return (min);
}

void    sort_fifteen(t_node **a, t_node **b)
{
    int     pos;

    pos = find_position(*a, find_min(*a));
    while (*a)
    {
        if (pos == 0)
        {
            pb(a, b);
            pos = find_position(*a, find_min(*a));
        }
        if (pos > 0 && pos <= ft_lstsize(*a) / 2)
        {
            ra(a);
            pos = find_position(*a, find_min(*a));
        }
        else if (pos > 0 && pos >= ft_lstsize(*a) / 2)
        {
            rra(a);
            pos = find_position(*a, find_min(*a));
        }
    }
    while (*b)
        pa(b, a);
}