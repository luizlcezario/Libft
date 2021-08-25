/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:09:09 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/24 14:48:48 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while(s[i] && i < n)
		i ++;
	return(i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*res;

	if(!s)
		return (NULL);
	a = ft_strlen(s);
	if(a > start)
		len = ft_strnlen(&s[start], len);
	else
		return(ft_strdup(""));
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s[start], len + 1);
	return (res);
}
