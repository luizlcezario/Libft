# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/27 13:53:47 by llima-ce          #+#    #+#              #
#    Updated: 2021/08/27 15:40:30 by llima-ce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re copy

CC = clang

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
		ft_putnbr_fd.c	\
		ft_lstnew.c		

OBJS = ${SRCS:%.c=%.o}

all: $(NAME)
	# make clean 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	${CC} -I . -c ${CFLAGS} ${SRCS}

clean:
	rm -f ${OBJS}
	# rm -f ${SRCS} 

fclean: clean
	rm -f ${NAME}
# 	remove the .c files from the main folder

re: fclean copy all
# 	Copy the .c archives in the folders to the main folder 
copy:
	rm -f ${SRCS}
	cp -f Part*/ft_*.c .
	cp -f Bonus/ft_*.c .

# 	compile all the .c, in all pastes of the main folder, create the libft.a and compile the main.c with the libft
run: re 
	${CC} ${CFLAGS} main.c -L . -lft && ./a.out

teste2: re
	cd teste2 && bash grademe.sh

teste1: re
	cd teste && make m

teste3:
	cd ../libft-unit-test && make
