/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:38:51 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/17 18:03:30 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int n)
{
	int a;

	a = 0;
	while(str[a] != n && str[a] != 0 )
		a++;
	if(str[a] == 0)
		return (NULL);
	return ((char *)(str + a));
}
