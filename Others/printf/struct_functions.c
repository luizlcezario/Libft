/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:19:58 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/04 15:23:16 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format	*ft_start_struct(va_list args)
{
	t_format		*new;
	t_convert_flags	*cf_now;

	new = malloc(1 * sizeof(t_format));
	cf_now = malloc(1 * sizeof(t_convert_flags));
	new->len = 0;
	new->len_all = 0;
	new ->formated_src = NULL;
	va_copy(new->args_c, args);
	cf_now->conversion = '\0';
	cf_now->flag_0 = FALSE;
	cf_now->flag_align = FALSE;
	cf_now->flag_hashtag = FALSE;
	cf_now->flag_plus = FALSE;
	cf_now->flag_space = FALSE;
	cf_now->flag_pointer = 0;
	cf_now->min_width = 0;
	new->cf_now = cf_now;
	return (new);
}

void	ft_reset_struct(t_format *buffer)
{
	free(buffer->formated_src);
	buffer->formated_src = NULL;
	buffer->cf_now->conversion = '\0';
	buffer->cf_now->flag_0 = FALSE;
	buffer->cf_now->flag_align = FALSE;
	buffer->cf_now->flag_hashtag = FALSE;
	buffer->cf_now->flag_plus = FALSE;
	buffer->cf_now->flag_space = FALSE;
	buffer->cf_now->flag_pointer = 0;
	buffer->cf_now->min_width = 0;
}

int	ft_end_struct(t_format *buffer)
{
	int	len;

	len = buffer->len;
	va_end(buffer->args_c);
	free(buffer->cf_now);
	buffer->cf_now = NULL;
	free(buffer);
	return (len);
}
