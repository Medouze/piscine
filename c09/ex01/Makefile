# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 10:45:33 by mlavergn          #+#    #+#              #
#    Updated: 2024/07/20 13:13:33 by mlavergn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS        = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS        = ${SRCS:.c=.o}
INCS        = includes
NAME        = libft.a
LIBC        = ar rc
LIBR        = ranlib
CC          = gcc
RM          = rm -f
CFLAGS      = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
