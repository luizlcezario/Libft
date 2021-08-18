/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:03:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/17 18:22:03 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int n)
{
	int a;

	a = ft_strlen(str);
	while(str[a] != n && a > 1 )
		a--;
	if(a == 1)
		return (NULL);
	return ((char *)(str + a - 1));
}
