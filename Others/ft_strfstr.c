/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:02:08 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/18 19:05:17 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strfstr(const char *str, const char *ptr)
{
	if (str == NULL || ptr == NULL)
		return (NULL);
	while (*str && !ft_strchr(ptr, *str))
		str++;
	if(*str == 0)
		return(NULL);
	return ((char *)str);
}