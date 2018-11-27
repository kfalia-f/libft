/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:09:07 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/27 17:37:18 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*a;
	unsigned int		i;
	int					k;

	i = 0;
	k = 0;
	if (!*s || start > len || len <= 0)
		return (NULL);
	a = (char *)malloc(sizeof(char) * (len - start));
	while (i < len)
	{
		if (i < start)
			i++;
		else
		{
			a[k] = s[i];
			i++;
			k++;
		}
	}
	a[k] = '\0';
	return (a);
}
