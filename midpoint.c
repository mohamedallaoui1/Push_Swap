/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midpoint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:12:31 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/27 12:50:27 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *reverse_list(t_node *a)
{
    t_node  *temp;
    t_node  *new;

    temp = a;
    new = NULL;
    if (a)
    {
        while (temp)
        {
            ft_lstadd_front(&new, ft_lstnew(temp->num));
            temp = temp->next;
        }
    }
    return (new);
}

int *list_to_array(t_node *a)
{
	int *arr;
	int i = 0;
	
	arr = malloc (sizeof(int)*(ft_lstsize(a)));
    if (!arr)
        return (0);
	while (a->next != NULL)
	{
		arr[i] = a->num;
		a = a->next;
		i++;
	}
    arr[i] = a->num;
	return arr;
}

void	swap(int	*a, int	*b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

t_node  *sort_func(t_node *head)
{
    int swapped;
    t_node *ptr1;
    t_node *lptr = NULL;

    if (head == NULL)
        return 0;
    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        ptr1 = head;
        while (ptr1->next != lptr)
        {
            if (ptr1->num > ptr1->next->num)
            {
                swap(&ptr1->num, &ptr1->next->num);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    return (head);
}
