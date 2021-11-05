/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:51:38 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/05 17:06:35 by luizz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "../../libft.h"

# define CONVERSIONS "cspdiuxX%"
# define HEX "0123456789abcdef"
# define HEXU "0123456789ABCDEF"

typedef enum e_bool {TRUE = 1, FALSE = 0}	t_bool;

typedef struct s_convert_flags {
	char	conversion;
	t_bool	flag_align;
	t_bool	flag_0;
	t_bool	flag_space;
	t_bool	flag_plus;
	t_bool	flag_hashtag;
	int		flag_pointer;
	int		min_width;
}			t_convert_flags;

typedef struct s_format {
	char			*formated_src;
	int				len;
	int				len_all;
	va_list			args_c;
	t_convert_flags	*cf_now;
}					t_format;

/**
 * @brief Sends formatted output to stdout.
 *
 * @param format This is the null-terminated string (C-string)
 * that is written to stdout. It consists of characters along with
 * optional format specifiers starting with %. Format tags prototype is
 * %[flags][width][.precision][specifier].
 * @param ... Depending on the format string, other additional
 * arguments specifying the data to be printed.
 * They occur in a sequence according to the format specifier.
 * @return The total number of characters written is returned.
 */
int			ft_printf(const char *format, ...);

/**
 * @brief Return formatted output.
 *
 * @param format This is the null-terminated string (C-string)
 * that is written to stdout. It consists of characters along with
 * optional format specifiers starting with %. Format tags prototype is
 * %[flags][width][.precision][specifier].
 * @param ... Depending on the format string, other additional
 * arguments specifying the data to be printed.
 * They occur in a sequence according to the format specifier.
 * @return The address of the string formated is returned.
 */
char		*ft_formatf(const char *format, ...);

char		*ft_vformatf(const char *format, t_format *buffer);
int			ft_check_all(char *formating, t_format *buffer);
void		ft_formating(t_format *buffer);
int			ft_new_errors(t_format *buffer, int type);
t_format	*ft_start_struct(va_list args);
void		ft_reset_struct(t_format *buffer);
int			ft_end_struct(t_format *buffer);
void		ft_get_string(t_format *buffer);
void		ft_get_char(t_format *buffer);
void		ft_get_adress(t_format *buffer);
void		ft_get_i_d(t_format *buffer);
void		ft_get_u_x(t_format *buffer, char *base);
void		ft_get_percent(t_format *buffer);
void		pointer_flag(t_format *buffer, int *len);
void		min_width_flag(t_format *buffer, int *len, t_bool flag);
void		hastag_flag(t_format *buffer, int *len);
void		space_flag(t_format *buffer, int *len);
void		plus_flag(t_format *buffer, int *len);
void		negative_sign(t_format *buffer, t_bool *flag, int *len);

#endif