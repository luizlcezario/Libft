/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:02:08 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/05 17:03:35 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfstr(const char *str, const char *ptr)
{
	if (str == NULL || ptr == NULL)
		return (NULL);
	while (*str && !ft_strchr(ptr, *str))
		str++;
	if (*str == 0)
		return (NULL);
	return ((char *)str);
}
