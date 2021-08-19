/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:14:31 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/18 21:23:00 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *str,size_t n);

char	*ft_strnstr(const char *str, const char *ptr, size_t n)
{
	int		i;
	size_t	ptr_len;

	if (0 == (ptr_len = ft_strnlen(ptr, n)))
		return (char *)str;
	i = 0;
	while (++i <= (int)(n - ptr_len))
	{
		if ((str[0] == ptr[0]) &&
			(0 == strncmp(str, ptr, ptr_len)))
			return (char *)str;
		str++;
	}
	return (NULL);
}

static size_t	ft_strnlen(const char *str,size_t n)
{
	size_t	a;

	a = 0;
	while (str[a] != 0 && a < n)
		a++;
	return (a);
}
