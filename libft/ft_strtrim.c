/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:26:20 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/20 00:54:31 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	f(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static	char	*myfunc(int i, int j, char const *s1, char *arr)
{
	int	k;

	k = 0;
	while (i < j)
	{
		arr[k++] = s1[i++];
	}
	arr[k] = '\0';
	return (arr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*arr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1[i] == '\0')
		return (ft_calloc(1, 1));
	while (s1[i] && f(s1[i], set))
		i++;
	while (s1[j] && f(s1[j], set) && j > i)
		j--;
	j++;
	if (i == j)
		return (ft_calloc(1, 1));
	arr = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!arr)
		return (0);
	myfunc(i, j, s1, arr);
	return (arr);
}
