/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 21:09:38 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/07 18:09:55 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	count;

	if (!s || !f)
		return (NULL);
	count = 0;
	res = ft_strdup(s);
	if (res == NULL)
		return (NULL);
	while (res[count] != 0)
	{
		res[count] = f(count, res[count]);
		count++;
	}
	return (res);
}
