/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:25:10 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/18 23:22:53 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*srcc;
	size_t	a;

	srcc = (char *)src;
	dst = (char *)dest;
	a = -1;
	if (srcc < dst)
	{
		while ((int)--n >= 0)
			dst[n] = srcc[n];
	}
	else
	{
		while (++a < n)
			dst[a] = srcc[a];
	}
	return (dest);
}
