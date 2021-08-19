/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:09:09 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/18 18:01:45 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t	a;
	char	*res;

	a = ft_strlen(s);
	res = NULL;
	if (start + len > a)
		return (NULL);
	ft_bzero((void *)(s + len + start - 1), 1);
	res = ft_strdup(s + start - 1);
	return (res);
}
