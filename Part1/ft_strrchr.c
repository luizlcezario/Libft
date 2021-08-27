/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:03:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/26 22:15:17 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	size_t	a;
	char	ch;

	a = ft_strlen(str) + 1;
	ch = (char)n;
	while (a--)
	{
		if (*(str + a) == ch)
		{
			return ((char *)(str + a));
		}
	}
	if (*(str + a) == ch)
		return ((char *)(str + a));
	return (NULL);
}
