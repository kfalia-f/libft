/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:00:54 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/28 15:16:22 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	int		k;
	int		len;
	char	*s;

	i = 0;
	k = 0;
	s = (char *)str;
	len = ft_strlen(str);
	while (i <= len)
	{
		if (str[i] == ch)
			k = i;
		i++;
	}
	if (k == 0)
		return (NULL);
	i = 0;
	while (i < k)
	{
		i++;
		s++;
	}
	return (s);
}
