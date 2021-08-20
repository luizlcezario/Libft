/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:48:35 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/19 21:18:35 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	a;
	const char * sr;

	a = -1;
	sr = (const char *)str;
	while (++a < n )
	{
		if (*(sr + a) == (char)c)
		{
			return ((void *)sr + a);
		}
		str++;
	}
	return (NULL);
}
