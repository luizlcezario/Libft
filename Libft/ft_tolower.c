/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:13:45 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/17 16:35:07 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if(c <= 'Z' && c >= 'A')
		c += 32;
	if(c < -1 && c >= -128 )
		c = 256 + c;
	return (c);
}
