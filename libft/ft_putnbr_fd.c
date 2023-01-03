/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:25:54 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/31 16:00:21 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	k;
	char		c;

	k = n;
	if (k < 0)
	{
		write (fd, "-", 1);
		k *= -1;
	}
	if (k >= 0 && k <= 9)
	{
		c = k + 48;
		write (fd, &c, 1);
	}
	if (k > 9)
	{
		ft_putnbr_fd(k / 10, fd);
		ft_putnbr_fd(k % 10, fd);
	}
}
