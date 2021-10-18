/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_formating2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:04:12 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/15 00:20:52 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	plus_flag(t_format *buffer, int *len)
{
	char	*tmp;

	if (buffer->cf_now->flag_plus == TRUE)
	{
		if (*buffer->formated_src == '-')
			return ;
		tmp = ft_strjoin("+", buffer->formated_src);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = *len + 1;
	}
}

void	space_flag(t_format *buffer, int *len)
{
	char	*tmp;

	if (buffer->cf_now->flag_space == TRUE
		&& buffer->cf_now->flag_plus == FALSE)
	{
		if (*buffer->formated_src == '-')
			return ;
		tmp = ft_strjoin(" ", buffer->formated_src);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = *len + 1;
	}
}

void	hastag_flag(t_format *buffer, int *len)
{
	char	*tmp;

	if (buffer->cf_now->flag_hashtag == TRUE && !(*len == 1
			&& *buffer->formated_src == '0'))
	{
		if (buffer->cf_now->conversion == 'p'
			|| buffer->cf_now->conversion == 'x')
		{
			tmp = ft_strjoin("0x", buffer->formated_src);
			free(buffer->formated_src);
			buffer->formated_src = tmp;
			*len += 2;
		}
		else if (buffer->cf_now->conversion == 'X')
		{
			tmp = ft_strjoin("0X", buffer->formated_src);
			free(buffer->formated_src);
			buffer->formated_src = tmp;
			*len += 2;
		}
	}
}
