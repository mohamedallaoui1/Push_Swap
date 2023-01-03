/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:37:43 by mallaoui          #+#    #+#             */
/*   Updated: 2022/12/04 21:37:55 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mallaoui/Desktop/Push_Swap/push_swap.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		res = res * 10 + (str[i++] - 48);
	if (res > 9223372036854775807 && sign > 0)
		return (-1);
	if (res > 9223372036854775807 && sign < 0)
		return (0);
	return (res * sign);
}