/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:26:01 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/29 15:57:06 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen2(const char *s, int i, char c)
{
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

int		ft_wrdlen(const char *s, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			k++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (k);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**a;
	int		m;

	i = 0;
	j = 0;
	m = ft_wrdlen(s, c);
	if ((a = (char **)malloc(sizeof(char *) * (m))) == NULL)
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i] != '\0' && j < m)
	{
		k = 0;
		a[j] = (char *)malloc(sizeof(char) * (ft_strlen2(s, i, c) + 1));
		while (s[i] != c && s[i] != '\0')
			a[j][k++] = s[i++];
		a[j][k] = '\0';
		while (s[i] == c)
			i++;
		j++;
	}
	return (a);
}
