# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 15:52:05 by mlavergn          #+#    #+#              #
#    Updated: 2024/07/22 10:52:30 by mlavergn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/do-op.c srcs/functions.c srcs/operations.c
OBJS = ${SRCS:.c=.o}
NAME = do-op
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all