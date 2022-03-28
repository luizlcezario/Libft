/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets_u_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:05:32 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/04 15:50:42 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_u_x(t_format *buffer, char *base)
{
	int	len;

	buffer->formated_src = ft_itoa_base(va_arg(buffer->args_c, unsigned), base);
	if (!buffer->formated_src)
	{
		free(buffer->formated_src);
		buffer->formated_src = ft_strdup("0");
	}
	len = ft_strlen(buffer->formated_src);
	pointer_flag(buffer, &len);
	if (buffer->cf_now->conversion == 'x' || buffer->cf_now->conversion == 'X')
		hastag_flag(buffer, &len);
	min_width_flag(buffer, &len, FALSE);
	space_flag(buffer, &len);
	plus_flag(buffer, &len);
	buffer->len = len;
}
