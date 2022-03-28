# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llima-ce <luizlcezario@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/27 13:53:47 by llima-ce          #+#    #+#              #
#    Updated: 2022/03/28 17:19:04 by llima-ce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putnbr_fd.c	
		

SRCS_BONUS =ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c

SRCS_OTHERS =	get_next_line.c	\
				ft_itoa_base.c	\
				ft_strfstr.c	\
				ft_new_atoi.c




SRCS_PRINTF =	ft_printf.c				\
				ft_vformatf.c			\
				ft_formatf.c			\
				struct_functions.c		\
				ft_check_all.c			\
				ft_formating.c			\
				ft_gets_s_c_p.c			\
				ft_gets_i_d.c			\
				ft_gets_u_x.c			\
				flags_formating.c		\
				flags_formating2.c		\
				ft_check_errors.c		\
				flags_pointer.c		

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

OBJS_OTHERS = $(SRCS_OTHERS:.c=.o)

OBJS_PRINTF = $(SRCS_PRINTF:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS) 
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(addprefix src/, $(SRCS))
	$(CC) -I . -c $(CFLAGS) $(addprefix  src/, $(SRCS))

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

$(OBJS_BONUS): $(addprefix bonus/, $(SRCS_BONUS))
	$(CC) -I . -c $(CFLAGS) $(addprefix bonus/, $(SRCS_BONUS))

others: $(OBJS) $(OBJS_BONUS) $(OBJS_OTHERS) $(OBJS_PRINTF)
	ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS) $(OBJS_OTHERS) $(OBJS_PRINTF)

$(OBJS_OTHERS): $(addprefix others/, $(SRCS_OTHERS))
	$(CC) -I ./others -I . -c $(CFLAGS) $(addprefix others/, $(SRCS_OTHERS))

$(OBJS_PRINTF): $(addprefix others/printf/, $(SRCS_PRINTF))
	$(CC) -I ./others/printf -I . -c $(CFLAGS) $(addprefix others/printf/, $(SRCS_PRINTF))

clean:
	rm -f $(OBJS) $(OBJS_BONUS) $(OBJS_OTHERS) $(OBJS_PRINTF)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

reother: fclean others

.PHONY: all clean fclean re  bonus rebonus others reothers
