/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:44:14 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/24 23:36:57 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * {"luiz lima cezario"} " "
 * return{{"luiz"},{"lima"},{"cezario"}}
 * 
 * 1. Achar quantos C tem 
 * 2. 
 * 
*/



static size_t	CountN(char const *s, char c)
{
	size_t	a;
	size_t	b;


	a = 0;
	b = 0;
	while (s[a] != 0)
	{
		if (s[a] == c)
		{
			ft_bzero((void *)s + a,1);
			b++;
		}
		a++;
	}
	return (b);
}

char **ft_split(char const *s, char c)
{
	char	**res;
	size_t	num;
	size_t	count;
	size_t	len;

	res = NULL;
	num = CountN(s, c);
	printf("ok");
	res = ft_calloc(num + 1, sizeof(char *));
	count = 0;
	if (res == NULL)
		return (NULL);
	while(count <= num)
	{
		if(count == 0)
			res[count] = ft_strdup(s);
		len = ft_strlen(res[count - 1] + 1);
		res[count] = ft_strdup(s + len);
	}
	return(res);
}
