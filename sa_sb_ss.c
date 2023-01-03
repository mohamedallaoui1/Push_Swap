/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:04:07 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/14 17:29:36 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_node   *lst)
{
    int temp;

    if (lst)
    {
        temp = lst->num;
        lst->num = lst->next->num;
        lst->next->num = temp;
        write(1, "sa\n", 3);
    }
}

void    sb(t_node   *lst)
{
    int temp;
    
    if (lst)
    {
        temp = lst->num;
        lst->num = lst->next->num;
        lst->next->num = temp;
        write(1, "sb\n", 3);
    }
}

void    ss(t_node   *lst)
{
    if (lst)
    {
        sa(lst);
        sb(lst);
        write(1, "ss\n", 3);
    }
}