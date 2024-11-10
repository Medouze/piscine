# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gustl <gustl@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 16:10:25 by mlavergn          #+#    #+#              #
#    Updated: 2024/07/20 21:52:08 by gustl            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS =  -Wall -Wextra -Werror

all: rush-02

rush-02: main.o lib.o parse_dict.o
	$(CC) $(CFLAGS) -o rush-02 main.o lib.o parse_dict.o

main.o: main.c rush.h
	$(CC) $(CFLAGS) -c main.c

lib.o: lib.c rush.h
	$(CC) $(CFLAGS) -c lib.c

parse_dict.o: parse_dict.c rush.h
	$(CC) $(CFLAGS) -c parse_dict.c



clean:
	rm -f *.o

fclean: clean
	rm -f rush-02

re: fclean all