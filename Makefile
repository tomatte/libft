# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 20:05:00 by dbrandao          #+#    #+#              #
#    Updated: 2022/06/09 21:21:33 by dbrandao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=    ft_strrchr.c ft_strchr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
             ft_isascii.c ft_isprint.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memset.c \
	         ft_memmove.c ft_strlcpy.c ft_memchr.c ft_toupper.c ft_strlcat.c ft_strncmp.c \
			 ft_strnstr.c ft_memcmp.c ft_atoi.c ft_strdup.c ft_tolower.c ft_calloc.c ft_substr.c \
			 ft_strjoin.c ft_strtrim.c

OBJS		= ${SRC:.c=.o}

CFLAGS	+= -Wall -Werror -Wextra -I./libft.h

NAME	= libft.a

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re: fclean all