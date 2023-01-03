/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:06:08 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/27 22:23:18 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void printlst(t_node **head)
{
	t_node *temp;

	temp = *head;
	printf("------start-----\n");
	while (temp)
	{
		printf("{%d} ", temp->num);
		temp = temp->next;
	}
	printf("\n------end-----\n");
}
int main(int ac, char *av[])
{
	t_node  *head_a, *head_b;
	int     i;
	int		j;
	
	i = 1;
	j = 0;
	head_a = NULL;
	head_b = NULL;
	if (ac > 2)
	{
		while(av[i])
		{
			ft_lstadd_back(&head_a, ft_lstnew(ft_atoi(av[i])));
			i++;
		}
	}
	if (ft_lstsize(head_a) == 2)
		sort_two(&head_a);
	else if (ft_lstsize(head_a) == 3)
		sort_three_nums(&head_a);
	else if (ft_lstsize(head_a) == 5)
		sort_five(&head_a, &head_b);
	else if (ft_lstsize(head_a) > 5 && ft_lstsize(head_a) <= 100)
		sort_hundred(&head_a, &head_b, 4);
	else if (ft_lstsize(head_a) > 100 && ft_lstsize(head_a) <= 500)
		sort_hundred(&head_a, &head_b, 9);
	system("leaks a.out");
	// printlst(&head_b);
}
