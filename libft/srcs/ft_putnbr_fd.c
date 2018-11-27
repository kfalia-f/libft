/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:32:29 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/11/25 15:34:04 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar(2 + '0', fd);
		ft_putnbr(147483648, fd);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-', fd);
			nb = nb * -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10, fd);
		}
		ft_putchar(nb % 10 + '0', fd);
	}
}
