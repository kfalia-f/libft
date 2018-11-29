/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:39:57 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/29 15:44:50 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*a;
	char			*b;
	size_t			i;

	if (dst == src || n == 0)
		return (dst);
	a = (char *)dst;
	b = (char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == c)
			return (a + i + 1);
		i++;
	}
	return (NULL);
}
