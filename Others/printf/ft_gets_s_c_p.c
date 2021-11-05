/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets_s_c_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:01:01 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/04 15:50:36 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_string(t_format *buffer)
{
	int		len;
	char	*tmp;

	tmp = va_arg(buffer->args_c, char *);
	if (tmp == NULL)
		buffer->formated_src = ft_strdup("(null)");
	else
		buffer->formated_src = ft_strdup(tmp);
	len = (int)ft_strlen(buffer->formated_src);
	pointer_flag(buffer, &len);
	min_width_flag(buffer, &len, FALSE);
	buffer->len = len;
}

void	ft_get_char(t_format *buffer)
{
	int	len;

	buffer->formated_src = malloc(2 * sizeof(char));
	buffer->formated_src[0] = va_arg(buffer->args_c, unsigned int);
	buffer->formated_src[1] = 0;
	len = 1;
	min_width_flag(buffer, &len, FALSE);
	buffer->len = len;
}

void	ft_get_adress(t_format *buffer)
{
	int		len;
	char	*tmp;

	buffer->formated_src = ft_itoa_base(va_arg(buffer->args_c, size_t), HEX);
	if (buffer->formated_src == NULL)
		buffer->formated_src = ft_strdup("0");
	tmp = ft_strjoin("0x", buffer->formated_src);
	free(buffer->formated_src);
	buffer->formated_src = tmp;
	len = ft_strlen(buffer->formated_src);
	min_width_flag(buffer, &len, FALSE);
	buffer->len = len;
}

void	ft_get_percent(t_format *buffer)
{
	buffer->formated_src = malloc(2 * sizeof(char));
	buffer->formated_src[0] = '%';
	buffer->formated_src[1] = 0;
	buffer->len = 1;
}
