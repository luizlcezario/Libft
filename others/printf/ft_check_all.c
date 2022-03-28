/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:19:52 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/05 15:31:59 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_min_width(char *flag, t_format *buffer)
{
	int	a;

	a = 0;
	while (ft_isdigit(flag[a]))
	{
		buffer->cf_now->min_width *= 10;
		buffer->cf_now->min_width += flag[a] - 48;
		a++;
	}
	return (a);
}

int	check_pointers(char *flag, t_format *buffer)
{
	int	a;

	a = 1;
	while (ft_isdigit(flag[a]))
	{
		buffer->cf_now->flag_pointer *= 10;
		buffer->cf_now->flag_pointer += flag[a] - 48;
		a++;
	}
	if (a == 1)
		buffer->cf_now->flag_pointer = -1;
	if (a > 1 && buffer->cf_now->flag_pointer == 0)
		buffer->cf_now->flag_pointer = -2;
	return (a);
}

int	check_flags(char *flag, t_format *buffer)
{
	if (*flag == '-')
		buffer->cf_now->flag_align = TRUE;
	else if (*flag == '0')
		buffer->cf_now->flag_0 = TRUE;
	else if (*flag == ' ')
		buffer->cf_now->flag_space = TRUE;
	else if (*flag == '+')
		buffer->cf_now->flag_plus = TRUE;
	else if (*flag == '#')
		buffer->cf_now->flag_hashtag = TRUE;
	else
		return (0);
	return (1);
}

int	check_while(char *formating, t_format *buffer, char *conversion)
{
	int	a;

	a = 0;
	while (a < conversion - formating)
	{
		if (check_flags(&formating[a], buffer) == 1)
			a += check_flags(&formating[a], buffer);
		else if (ft_isdigit(formating[a]))
			a += check_min_width(&formating[a], buffer);
		else if (formating[a] == '.')
			a += check_pointers(&formating[a], buffer);
		else
			return (ft_new_errors(buffer, 2));
	}
	if (conversion - formating - a == 0)
		return (1 + conversion - formating);
	else
		return (ft_new_errors(buffer, 1));
}

int	ft_check_all(char *formating, t_format *buffer)
{
	char	*conversion;
	int		a;

	conversion = ft_strfstr(formating, CONVERSIONS);
	a = 0;
	if (conversion != NULL)
	{
		buffer->cf_now->conversion = *conversion;
		if (a <= conversion - formating)
		{
			a = check_while(formating, buffer, conversion);
		}
		ft_formating(buffer);
		return (a);
	}
	else
		return (ft_new_errors(buffer, 1));
}
