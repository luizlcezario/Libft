/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 21:43:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/27 14:47:17 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static void loop(int nb,int fd)
{
	if(nb >= 10)
	{
		loop(nb / 10);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}

void ft_putnbr_fd(int nb,  int fd)
{
	if(nb < 0 && nb != -2147483648)
	{
		nb *= -nb;
		write(fd,"-", 1);
	}
	if (nb != -2147483648)
	{
		loop(nb);
	}
	if ( nb == -2147483648)
	{
		write(fd,"-", 1);
		nb /= 10;
		nb *= -nb;
		loop(nb, fd);
		write(fd, "8", 1);
	}
}
