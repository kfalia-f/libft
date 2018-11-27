/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:54:20 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/27 15:19:39 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (i == 0)
		return (i);
	return (i - 1);
}

char	*ft_strcat(char *dst, const char *app)
{
	int		i;
	int		k;
	char	*s;

	i = 0;
	k = 0;
	if (!app && !dst)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (ft_strlen(dst) + ft_strlen(app)));
	while (dst[i] != '\0')
	{
		s[i] = dst[i];
		i++;
	}
	while (app[k] != '\0')
		s[i++] = app[k++];
	s[i] = '\0';
	return (s);
}
