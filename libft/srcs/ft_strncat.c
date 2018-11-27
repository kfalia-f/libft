/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:23:20 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/27 15:35:51 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *dst, const char *app, size_t n)
{
	char	*s;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (n == 0 || (!dst && !app))
		return (NULL);
	s = (char *)malloc(sizeof(char) * n);
	while (dst[i] != '\0' && n > 0)
	{
		s[i] = dst[i];
		i++;
		n--;
	}
	while (app[k] != '\0' && n > 0)
	{
		s[i++] = app[k++];
		n--;
	}
	s[i] = '\0';
	return (s);
}
