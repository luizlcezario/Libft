/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:14:31 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/26 22:11:11 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ptr, size_t n)
{
	size_t	ptrlen;

	ptrlen = ft_strlen(ptr);
	if (!ptrlen)
		return ((char *)str);
	while (*str && ptrlen <= n--)
	{
		if (ft_strncmp(str, ptr, ptrlen) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
