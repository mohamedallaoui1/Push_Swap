/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:57:43 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/31 16:02:30 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*arr;
	char			*p;

	p = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		arr = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (len < ft_strlen(s))
		arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	while (len--)
	{
		arr[i] = s[start++];
		if (arr[i] == '\0')
			return (arr);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
