/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:25:15 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/21 13:53:38 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*a;

	if (!size)
		return (NULL);
	a = (char*)malloc(sizeof(char) * size);
	while (size != 0)
	{
		*a++ = '0';
		size--;
	}
	return (a);
}
