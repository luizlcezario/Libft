/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:20:38 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/14 19:10:11 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	string_pointer(t_format *buffer, int *len)
{
	if (buffer->cf_now->flag_pointer < *len && 
		buffer->cf_now->flag_pointer != 0 && buffer->formated_src[0] != 0)
	{
		buffer->formated_src[buffer->cf_now->flag_pointer] = 0;
		*len = buffer->cf_now->flag_pointer;
	}
}

void	other_pointer(t_format *buffer, int *len)
{
	char	*tmp;

	if (buffer->cf_now->flag_pointer > *len && buffer->formated_src[0] != 0)
	{
		tmp = malloc(buffer->cf_now->flag_pointer + 1 * sizeof(char));
		ft_memset(tmp, '0', buffer->cf_now->flag_pointer);
		tmp[buffer->cf_now->flag_pointer] = 0;
		ft_memcpy(&tmp[buffer->cf_now->flag_pointer - *len],
			buffer->formated_src, *len);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = buffer->cf_now->flag_pointer;
	}
}

void	pointer_flag(t_format *buffer, int *len)
{
	if(buffer->cf_now->flag_pointer == -1)
	{
		if( buffer->formated_src[0] != 0)
			buffer->formated_src[0] = 0;
		*len = 0;
	}
	else if(buffer->cf_now->conversion == 's')
		string_pointer(buffer, len);
	else if (buffer->cf_now->conversion == 'd' || 
		buffer->cf_now->conversion == 'i' || 
		buffer->cf_now->conversion == 'u' || 
		buffer->cf_now->conversion == 'x' ||
		buffer->cf_now->conversion == 'X' )
		other_pointer(buffer, len);
}