/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:25:44 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/14 23:57:43 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((unsigned char *)src < (unsigned char *)dst)
	{
		while (len--)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
