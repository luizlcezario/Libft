/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:02:04 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/17 16:05:40 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest,const char *restrict src, size_t size)
{
	size_t	a;
	int		teste;

	a = 0;
	while (*dest != 0 && a < size)
	{
		a++;
		dest++;
	}
	teste = a < size;
	while (*src != 0 && a < size)
	{
		*dest = *src;
		dest++;
		src++;
		++a;
	}
	if (a == size)
		dest--;
	if (teste)
		*dest = 0;
	while (*src != 0)
	{
		src++;
		a++;
	}
	return (a);
}
