/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:14:00 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/26 15:05:54 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char)s1[i] || ((unsigned char)s2[i])) && i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
		{
			return (1);
		}
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
