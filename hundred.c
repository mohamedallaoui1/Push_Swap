/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:34:49 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/29 15:00:35 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_node *head, int to_find)
{
    int i = 0;
    while (head)
    {
        if(head->num == to_find)
            return (i);
        i++;
        head = head->next;
    }
    return(i);
}

int get_max(t_node *head)
{
    int max;
    max = head->num;
    while (head)
    {
        if(head->num > max)
            max = head->num;
        head = head->next;
    }
    return (max);
}

int get_max_2(t_node *head, int max)
{
    int max2;
    max2 = head->num;
    if(head->num == max)
        max2 = head->next->num;
    while (head)
    {
        if(head->num < max && head->num > max2)
            max2 = head->num;
        head = head->next;
    }
    return (max2);
}

void fix_it(t_node **a)
{
    if(ft_lstsize(*a) > 1)
        if((*a)->num > (*a)->next->num)
            sa(*a);
}

void just_move_it(t_node **a, t_node **b, int data)
{
    int size;
    int index;
    index = 1;
    fix_it(a);
    while (1)
    {
        index = get_index(*b, data);
        size = ft_lstsize(*b);
        if(index == 0)
        {
            pa(b, a);
            break;
        }
        if(index > size / 2)
            rrb(b);
        else
            rb(b);
    }
    fix_it(a);
}

int *push_it_back(t_node **b)
{
    int size;
    int max1;
    int max2;
    int result1;
    int result2;
    int pos1;
    int pos2;
    int *target;

    target = malloc (sizeof(int) * 2);
    size = ft_lstsize(*b);
    max1 = get_max(*b);
    max2 = get_max_2(*b, max1);
    pos1 = get_index(*b, max1);
    pos2 = get_index(*b, max2);
    if (pos1 < size / 2)
        result1 = pos1 + 1;
    else
        result1 = (size - pos1) + 2;
    if (pos2 < size / 2)
        result2 = pos2 + 1;
    else
        result2 = (size - pos2) + 2;
    if(result1 < result2)
    {
        target[0] = max1;
        target[1] = max2;
    }
    else
    {
        target[0] = max2;
        target[1] = max1;
    }
    return target;
}

void    from_b_to_a(t_node  **a, t_node **b)
{
    int     *arr;
    int     max;

    arr = NULL;
    while (ft_lstsize(*b))
    {
        if(ft_lstsize(*b) == 1)
        {
            pa(b, a);
            continue;
        }
        arr = push_it_back(b);
        
        max = get_max(*b);
        if(arr[0] == max)
            just_move_it(a, b, arr[0]);
        else
        {
            just_move_it(a, b, arr[0]);
            just_move_it(a, b, arr[1]);
        }
        free(arr);
    }
    free(*b);
}

void    sort_hundred(t_node **a, t_node **b, int  base)
{
    int     i;
    int     size;
    int     count;

    indexation(a);
    size = ft_lstsize(*a) / base;
    i = 1;
    count = 0;
    while (ft_lstsize(*a))
    {
        if ((*a)->index <= i * size)
        {
            if ((*a)->index >= (i * size) - (size / 2))
                pb(a, b);
            else
            {
                pb(a, b);
                rb(b);
            }
            count++;
        }
        else
            ra(a);
        if (count == i * size)
            i++;
    }
    from_b_to_a(a, b);
}