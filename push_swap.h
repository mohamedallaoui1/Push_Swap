/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:06:34 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/27 22:13:19 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "/Users/mallaoui/Desktop/Push_Swap/libft/libft.h"

typedef struct node
{
	int num;
	int	index;
	struct node *next;
}              t_node;

typedef	struct vars
{
	int		start;
	int		end;
	int		i;
	int		j;
	int		size;
	int		pos;
}			t_var;

void 	printlst(t_node **head);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstnew(int content);
int		ft_atoi(const char *str);
int		check_doubles(t_node *head, int	value);
int		ft_lstsize(t_node *lst);
void	sa(t_node   *lst);
void	sb(t_node   *lst);
void	ss(t_node   *lst);
void	pb(t_node   **stack_a, t_node  **stack_b);
void	pa(t_node	**stack_b, t_node	**stack_a);
void    ra(t_node **stack_a);
void    rb(t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
void	Sort_list(t_node **stack_a, t_node	**stack_b);
t_node	*sort_func(t_node *a);
int		find_max(t_node	*a);
int 	*list_to_array(t_node *a);
int     find_min(t_node *a);
void    sort_fifteen(t_node **a, t_node **b);
void	sort_three_nums(t_node	**a);
void    sort_two(t_node **a);
void    sort_five(t_node **a, t_node **b);
int     find_position(t_node *a, int min);
void    sort_hundred(t_node **a, t_node **b, int	base);
t_node  *reverse_list(t_node *a);
t_node  *copy_list(t_node *a);
int 	get_num_in_position(t_node  *a, int     pos);
void    indexation(t_node   **a);
#endif