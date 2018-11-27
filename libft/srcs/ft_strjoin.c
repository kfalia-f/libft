/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:58:38 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/27 19:15:44 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		k;

	if (s1[0] == '\0' || s2[0] == '\0')
		return (NULL);
	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	i = 0;
	k = 0;
	while (s1[i] != '\0')
		s[k++] = s1[i++];
	i = 0;
	k--;
	while (s2[i] != '\0')
		s[k++] = s2[i++];
	s[k] = '\0';
	return (s);
}
