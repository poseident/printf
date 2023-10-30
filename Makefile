# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschweit <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 13:56:33 by bschweit          #+#    #+#              #
#    Updated: 2022/04/19 14:01:39 by bschweit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_util.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
	ar rcs $(NAME) $(OBJS)

all : ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
