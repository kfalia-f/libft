/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:58:38 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/24 14:10:29 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char const *s)
{
	int i;

	i = 0;
	while (s[i] !='\0')
		i++;
	return (i);
}

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

int main()
{
	char s1[10] = "0123456789";
	char s2[5] = "abcde";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
