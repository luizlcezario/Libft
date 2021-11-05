/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formating.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:19:55 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/20 21:05:49 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_formating(t_format *buffer)
{
	if (buffer->cf_now->conversion == 's')
		return (ft_get_string(buffer));
	else if (buffer->cf_now->conversion == 'c')
		return (ft_get_char(buffer));
	else if (buffer->cf_now->conversion == 'p')
		return (ft_get_adress(buffer));
	else if (buffer->cf_now->conversion == 'd'
		|| buffer->cf_now->conversion == 'i')
		return (ft_get_i_d(buffer));
	else if (buffer->cf_now->conversion == 'u')
		return (ft_get_u_x(buffer, "0123456789"));
	else if (buffer->cf_now->conversion == 'x')
		return (ft_get_u_x(buffer, HEX));
	else if (buffer->cf_now->conversion == 'X')
		return (ft_get_u_x(buffer, HEXU));
	else if (buffer->cf_now->conversion == '%')
		return (ft_get_percent(buffer));
}
