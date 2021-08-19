/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:48:35 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/18 12:57:53 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n && (char *)str != 0)
	{
		if (*(char *)str == c)
			return ((void *)str);
		str++;
		a++;
	}
	return (NULL);
}
