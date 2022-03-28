/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets_i_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:52:11 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/04 18:34:46 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	negative_sign(t_format *buffer, t_bool *flag, int *len)
{
	char	*tmp;

	tmp = NULL;
	if (*flag == FALSE && buffer->formated_src[0] == '-')
	{
		*flag = TRUE;
		tmp = ft_strdup(&buffer->formated_src[1]);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
	}
	else if (*flag == TRUE)
	{
		tmp = ft_strjoin("-", buffer->formated_src);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = *len + 1;
	}
}

void	ft_get_i_d(t_format *buffer)
{
	int		len;
	t_bool	flag;

	buffer->formated_src = ft_itoa(va_arg(buffer->args_c, int));
	flag = FALSE;
	negative_sign(buffer, &flag, &len);
	if (!buffer->formated_src)
	{
		free(buffer->formated_src);
		buffer->formated_src = ft_strdup("0");
	}
	len = ft_strlen(buffer->formated_src);
	pointer_flag(buffer, &len);
	min_width_flag(buffer, &len, flag);
	space_flag(buffer, &len);
	plus_flag(buffer, &len);
	buffer->len = len;
}
