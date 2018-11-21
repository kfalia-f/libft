/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:07:29 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/21 16:01:32 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*a;

	i = 0;
	a = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s[i] != '\0')
	{
		a[i] = f(s[i]);
		i++;
	}
	return (a);
}
