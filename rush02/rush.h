/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustl <gustl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:12:39 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/20 22:41:15 by gustl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
#define RUSH_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#include <stdio.h>


typedef struct s_num
{
    char *key;
    char *value;
} t_num;

void num_to_letter(int n);
void write_string(char *str);
void write_number(int n, char *units[], char *tens[], char *multiples[]);
// void num_to_words(t_num *dict, char *num, int first);
void	num_to_words(t_num *dict, char *number_str, int index);
int ft_atoi(char *str);
int ft_strcmp(char *s1, char *s2);
char *find_in_dict(t_num *dict, char *num);
int parse_dict(t_num *dict);
char	*ft_strdup(char *src);
char	*ft_strndup(char *src, int start, int end);
char	*getmult(char *num);
char	*getdec(char *num);
int ft_strlen(char *str);

#endif