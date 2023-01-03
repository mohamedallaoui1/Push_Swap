/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_nums.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:41:31 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/24 19:50:12 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int second_min(t_node *a, int min)
{
    int *arr;
    int i;
    int sec;

    arr = list_to_array(a);
    sec = arr[0];
    i = 0;
    while (arr[i])
    {
        if (arr[i] < sec && arr[i] != min)
            sec = arr[i];
        i++;
    }
    free(arr);
    return sec;
}

void    sort_five(t_node **a, t_node **b)
{
    int min;
    int size;
    int sec;
    
    min = find_min(*a);
    size = ft_lstsize(*a);
    sec = second_min(*a, min);
    while (ft_lstsize(*a) > 3)
    {
        if (find_position(*a, find_min(*a)) == 0)
            pb(a, b);
        else if (find_position(*a, find_min(*a)) > 0 &&
                find_position(*a, find_min(*a)) <= ft_lstsize(*a) / 2)
            ra(a);
        else if (find_position(*a, find_min(*a)) > 0 &&
                find_position(*a, find_min(*a)) > ft_lstsize(*a) / 2)
            rra(a);
       
    }
    sort_three_nums(a);
    while (*b)
        pa(b, a);
}