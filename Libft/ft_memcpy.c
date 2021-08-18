/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:37:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/17 09:22:41 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest,const void *src, size_t n)
{
	size_t a;
	void *ptr;

	ptr = dest;
	a = 0;
	while((char *)src != 0 && a < n)
	{
		*(char *)dest = *(char *)src;
		src++;
		dest++;
		a++;
	}
	return(ptr);
}
