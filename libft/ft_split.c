/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:35:27 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/31 16:32:20 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		if (s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

static void	myfree(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**myfunc(const char *s, char **tab, int i, char c)
{
	int	j;
	int	k;

	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = i;
			while (s[i] != c && s[i])
				i++;
			tab[j] = ft_substr(s, k, i - k);
			if (!tab[j])
				myfree(tab);
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	myfunc(s, tab, i, c);
	return (tab);
}
