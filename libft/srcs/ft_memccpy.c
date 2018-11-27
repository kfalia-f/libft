/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:39:57 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/27 17:30:36 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *a;
	char *b;
	char h;

	a = (char *)dst;
	b = (char *)src;
	h = (char)c;
	while (n != 0 && *(a - 1) != h)
	{
		*a++ = *b++;
		n--;
	}
	return (dst);
}
