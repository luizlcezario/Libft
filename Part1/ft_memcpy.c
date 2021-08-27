/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:37:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/27 13:47:37 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if((dest == NULL && src == NULL) || n == 0)
		return(NULL);
	d = (char *)dest;
	s = (char *)src;
	while (n--)
		d[n] = s[n];
	return (dest);
}
