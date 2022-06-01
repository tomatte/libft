SRC		= ft_bzero.c ft_memcpy.c ft_memset.c ft_memmove.c

OBJS		= ${SRC:.c=.o}

CFLAGS	+= -Wall -Werror -Wextra -I./libft.h

NAME	= libft.a

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}
