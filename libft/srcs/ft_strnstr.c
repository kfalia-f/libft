/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:12:22 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/28 16:28:31 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int	i;
	int	j;
	int k;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while ((str[i] != to_find[0]) && (str[i] != '\0'))
		i++;
	k = i;
	while (str[i] == to_find[j] && str[i] != '\0' && n > 0)
	{
		j++;
		i++;
		n--;
	}
	if (to_find[j] == '\0')
		return (&str[k]);
	else
		return (0);
}
