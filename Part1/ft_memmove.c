/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:25:10 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/27 12:57:38 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srcc;
	size_t	a;

	srcc = (unsigned char *)src;
	dst = (unsigned char *)dest;
	a = 1;
	if (srcc < dst)
	{
		while (++a <= n)
			dst[a] = srcc[a];
	}
	else
		ft_memcpy(dst, srcc, n);
	return (dest);
}
