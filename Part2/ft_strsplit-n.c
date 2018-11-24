/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:26:01 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/24 17:17:20 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_strlen(char *s, char c, int *i)
{
	while (s[*i] != c)
		(*i)++;
}

int		ft_wrdlen(char *s, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while(s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			k++;
		while (s[i] != c && s[i] != '\0')
			i++;
	printf("k = %d ", k);
	printf("i = %d\n", i);
	}
	return (k);
}

/*char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	*a;

	i = 0;
	j = 0;
	a = (char **)malloc(sizeof(char *) * ft_wrdlen(s, c));
	while (a[j])
	{	
		if (s[i] == c)
		{
			k = 0;
			a[j] = (char *)malloc(sizeof(char) * ft_strlen(s, c, i + 1));
			while (s[i + 1] != c)
			{
				a[j][k] = s[i + 1];
				k++;
				i++;
			}
			i++;
		}
	}
}
*/
int main()
{
	char	s[10] = " av ds fg ";
	char	c = ' ';
	
	ft_wrdlen(s, c);
	return (0);
}
