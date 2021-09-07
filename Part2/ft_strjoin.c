/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:48:50 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/02 19:36:04 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1 ,s1_len + 1);
	ft_strlcpy(res + s1_len, s2, s2_len + 1);
	return (res);
}
