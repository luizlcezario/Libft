/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:03:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/27 13:57:15 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int	len;
	char	ch;

	len = ft_strlen(str);
	ch = (unsigned char)n;
	while (--len >= 0)
	{
		if (*(str + len) == ch)
		{
			return ((char *)(str + len));
		}
	}
	return (NULL);
}
