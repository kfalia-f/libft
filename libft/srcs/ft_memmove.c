/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:56:52 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/27 17:36:03 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *source, size_t n)
{
	char *a;
	char *b;

	a = (char *)dst;
	b = (char *)source;
	while (n != 0)
	{
		*a++ = *b++;
		n--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * n);
	ft_memcpy(a, src, n);
	ft_memcpy(dst, a, n);
	free(a);
	return (dst);
}
