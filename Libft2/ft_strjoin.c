/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:48:50 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/18 21:03:00 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *res, char *str)
{
	int a;

	a = 0;
	while(str[a] != 0)
	{
		res[a] = str[a];
		a++;
	}
	res[a] = 0;
	return(res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str_len;
	char 	*res;
	
	str_len = ft_strlen(s1) + ft_strlen(s2);
	res = ft_calloc(str_len, sizeof(char));
	if(res == NULL)
		return(NULL);
	res = ft_strcpy(res, (char *)s1);
	res = ft_strcpy(res + ft_strlen(s1), (char *)s2) - ft_strlen(s1); 
	return (res);
}
