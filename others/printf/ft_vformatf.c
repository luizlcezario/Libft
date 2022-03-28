/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vformatf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <luizlcezario@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:55:18 by luizz             #+#    #+#             */
/*   Updated: 2022/03/16 15:46:30 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_merge(char *all, t_format *buffer, int *pt_start, int pt_end)
{
	char	*new1;
	int		len_all;

	if (all == NULL || *pt_start < 0)
		return (all);
	len_all = buffer->len_all - pt_end + buffer->len + 1;
	new1 = malloc(len_all * sizeof(char));
	new1[len_all - 1] = 0;
	if (new1 == NULL)
		return (all);
	ft_memcpy(new1, all, *pt_start);
	ft_memcpy(new1 + *pt_start, buffer->formated_src, buffer->len);
	ft_strlcpy(new1 + *pt_start + buffer->len, all + *pt_start + pt_end,
		len_all + 1);
	free(all);
	all = NULL;
	*pt_start += buffer->len;
	buffer->len_all = len_all - 1;
	return (new1);
}

char	*ft_vformatf(const char *format, t_format *buffer)
{
	char	*format_tmp;
	int		end_format;
	int		a;

	a = 0;
	format_tmp = ft_strdup(format);
	buffer->len_all = ft_strlen(format_tmp);
	while (format_tmp[a] != 0)
	{
		if (format_tmp[a] == '%')
		{
			end_format = ft_check_all((char *)&format_tmp[a + 1], buffer) + 1;
			if (buffer->formated_src != NULL)
				format_tmp = ft_merge(format_tmp, buffer, &a, end_format);
			ft_reset_struct(buffer);
		}
		else
			a++;
	}
	buffer->len = a;
	return (format_tmp);
}
