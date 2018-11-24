/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:20:07 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/24 17:49:19 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(int n)
{
	int k;

	if (n < 0)
	{
		n *= -1;
		k = 2;
	}
	else
		k = 1;
	if (n < 10 && n >= 0)
		return (1);
	while (n > 10)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		k;

	i = 0;
	k = ft_strlen(n);
	s = (char *)malloc(sizeof(char) * ft_strlen(n));
	if (n < 0)
	{
		s[i] = '-';
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		s[i] = n % 10;
		n /= 10;
		i++;
	}
}
