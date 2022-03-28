/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_formating.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:19:14 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/05 15:40:01 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_flag(t_format *buffer, int *len, char *tmp)
{
	if (buffer->cf_now->flag_align == TRUE)
		ft_memcpy(tmp, buffer->formated_src, *len);
	else
	{
		ft_strlcpy(tmp + buffer->cf_now->min_width - *len,
			buffer->formated_src, *len + 1);
	}
}

void	zero_flag(t_format *buffer, char *tmp, t_bool flag, int *len)
{
	char	*flag_tmp;

	if (buffer->cf_now->flag_0 == TRUE
		&& buffer->cf_now->flag_align == FALSE
		&& (buffer->cf_now->flag_pointer == 0))
	{
		ft_memset(tmp, '0', buffer->cf_now->min_width);
		if (flag == TRUE)
		{
			tmp[0] = '-';
			flag = FALSE;
		}
	}
	else
	{
		if (flag == TRUE)
		{
			flag_tmp = ft_strjoin("-", buffer->formated_src);
			free(buffer->formated_src);
			buffer->formated_src = flag_tmp;
			*len = *len + 1;
			flag = FALSE;
		}
		ft_memset(tmp, ' ', buffer->cf_now->min_width);
	}
}

void	min_width_flag(t_format *buffer, int *len, t_bool flag)
{
	char	*tmp;

	if (buffer->cf_now->min_width > *len)
	{
		tmp = malloc(buffer->cf_now->min_width + 1 * sizeof(char));
		tmp[buffer->cf_now->min_width] = 0;
		zero_flag(buffer, tmp, flag, len);
		minus_flag(buffer, len, tmp);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = buffer->cf_now->min_width;
	}
	else if (flag == TRUE)
	{
		tmp = ft_strjoin("-", buffer->formated_src);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = *len + 1;
	}
}
