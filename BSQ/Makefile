# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 11:59:52 by lecartuy          #+#    #+#              #
#    Updated: 2024/07/24 15:58:30 by mlavergn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/*.c
OBJS = ${SRCS:.c=.o}
NAME = map
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