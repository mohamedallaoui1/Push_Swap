/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:31:54 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/26 14:56:46 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned int	i;
	unsigned char	c;

	i = 0;
	c = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
}
