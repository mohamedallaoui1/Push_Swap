/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:59:26 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/19 10:56:34 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	while (s[i])
		i++;
	len = i;
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (0);
}
