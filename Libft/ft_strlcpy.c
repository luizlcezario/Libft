/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:41:46 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/18 20:04:40 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != 0 && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
