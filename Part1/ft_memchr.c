/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:48:35 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/27 15:52:14 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	a;
	char	*sr;

	a = 0;
	sr = (char *)str;
	while (a < n)
	{
		if (sr[a] == (char)c)
			return ((void *)(&sr[a]));
		a++;
	}
	return (NULL);
}
