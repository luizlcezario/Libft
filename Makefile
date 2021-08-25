.PHONY: all clean fclean re

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
		ft_split.c

OBJS = ${SRCS:%.c=%.o}

all: $(NAME)
	make clean 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): copy $(SRCS)
	${CC} -I . -c ${CFLAGS} ${SRCS}

clean:
		rm -f ${OBJS}
		rm -f ${SRCS} 

fclean: clean
		rm -f ${OBJS} ${NAME}
		# remove the .c files from the main folder

re: fclean all 

# Copy the .c archives in the folders to the main folder 
copy:
	cp -f Libft*/ft_*.c .

# compile all the .c, in all pastes of the main folder, create the libft.a and compile the main.c with the libft
run: all 
	${CC} main.c -L . -lft
