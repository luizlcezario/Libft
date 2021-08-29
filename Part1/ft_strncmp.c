/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:40:32 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/27 23:09:17 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (*s2 && *s1 && *s2 == *s1 && a < n - 1)
	{
		s1++;
		s2++;
		a++;
	}
	return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
}
