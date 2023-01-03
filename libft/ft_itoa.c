/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaoui <mallaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:10:43 by mallaoui          #+#    #+#             */
/*   Updated: 2022/10/26 21:03:50 by mallaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*myfunc(char *arr, int len, int n, int sign)
{
	while (n)
	{
		arr[--len] = (n % 10) * sign + '0';
		n /= 10;
	}
	return (arr);
}

static	int	mylen(int i, int len)
{
	while (i)
	{
		i /= 10;
		len++;
	}
	return (len);
}

static	char	*func(char *s, int len, int n, int sign)
{
	myfunc(s, len, n, sign);
	if (sign < 0)
		s[0] = '-';
	if (n == 0)
		s[0] = '0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	int		len;
	char	*s;

	len = 0;
	sign = 1;
	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		sign *= -1;
	}
	i = n;
	len = mylen(i, len);
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	func(s, len, n, sign);
	return (s);
}
