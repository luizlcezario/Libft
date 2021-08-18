.PHONY: all clean fclean re

CC = clang

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_*.c 

OBJS = ${SRCS:%.c=%.o}

all: $(NAME)

# Copy the .c archives in the folders to the main folder 
copy:
	cp -f */*.c .

$(NAME):$(OBJS)
	ar rcs ${NAME} ${OBJS}

$(OBJS):
	${CC} -I . -c ${CFLAGS} ${SRCS} 

clean:
		rm -f  ${OBJS}
#		rm -f ${SRCS} # remove the .c files from the main folder

fclean: clean
		rm -f ${OBJS} ${NAME}

re: fclean all 

# compile all the .c, in all pastes of the main folder, create the libft.a and compile the main.c with the libft 
run: copy re
		${CC} ${GCC_F} main.c -L . -lft
		rm -f ${SRCS}
		make clean
