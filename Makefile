# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/27 13:53:47 by llima-ce          #+#    #+#              #
#    Updated: 2021/08/30 18:53:46 by llima-ce         ###   ########.fr        #
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
		


SRCS_BONUS =ft_lstnew.c		\
			ft_lstadd_front.c\
			ft_lstsize.c	\
			ft_lstlast.c	\
			ft_lstadd_back.c\
			ft_lstdelone.c	\
			ft_lstclear.c	\
			ft_lstiter.c	\
			ft_lstiter.c	\
			ft_lstmap.c
		
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS) 
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	make copy
	${CC} -I . -c ${CFLAGS} ${SRCS}

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

$(OBJS_BONUS): $(SRCS_BONUS)
	${CC} -I . -c ${CFLAGS} ${SRCS_BONUS}
	
clean:
	rm -f ${OBJS} $(OBJS_BONUS)
#	rm -f ${SRCS} $(SRCS_BONUS)

fclean: clean
	rm -f ${NAME}

re: fclean copy all

copy:
	rm -f ${SRCS}
	cp -f Part*/ft_*.c .
	cp -f Bonus/ft_*.c .
	
rebonus: fclean copy bonus

# 	compile all the .c, in all pastes of the main folder, create the libft.a and compile the main.c with the libft
run: re 
	${CC} ${CFLAGS} main.c -L . -lft && ./a.out


teste2: re
	cd teste2 && bash grademe.sh

teste1: re
	cd teste && make b

.PHONY: all clean fclean re copy bonus rebonus
