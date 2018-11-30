/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:26:01 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/30 20:46:30 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_colwr(const char *s, char c)
{
	int		k;
	int		flag;

	flag = 0;
	k = 0;
	while (*s != '\0')
	{
		if (flag == 1 && *s == c)
			flag = 0;
		if (flag == 0 && *s != c)
		{
			flag = 1;
			k++;
		}
		s++;
	}
	return (k);
}

static int		ft_wlen(const char *s, char c)
{
	int		l;

	l = 0;
	while (*s != c && *s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**a;
	int		nw;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	nw = ft_colwr((const char *)s, c);
	a = (char **)malloc(sizeof(*a) * (ft_colwr((const char *)s, c) + 1));
	if (a == NULL)
		return (NULL);
	while (nw--)
	{
		while (*s == c && *s != '\0')
			s++;
		a[i] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		if (a[i] == NULL)
			return (NULL);
		s = s + ft_wlen(s, c);
		i++;
	}
	a[i] = NULL;
	return (a);
}