/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:11 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/25 22:51:24 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	if ((!dst || !src) && dstsize == 0)
		return (0);
	i = ft_strlen(dst);
	j = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d >= dstsize)
		return (s + dstsize);
	while (src[j] && j < dstsize - d - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (d + s);
}
