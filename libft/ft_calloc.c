/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:50:51 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/26 14:56:50 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	i;
	void			*arr;

	i = 0;
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	arr = malloc(size * count);
	if (!arr)
	{
		return (NULL);
	}
	ft_bzero(arr, count * size);
	return (arr);
}
