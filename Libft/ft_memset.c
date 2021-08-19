/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 23:03:19 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/18 12:59:36 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	a;
	void	*str;

	a = 0;
	str = ptr;
	while (a < n && (char *)ptr != 0)
	{
		*(char *)ptr = x;
		ptr++;
		a++;
	}
	return (str);
}
