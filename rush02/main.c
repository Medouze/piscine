/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustl <gustl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:25:36 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/20 22:45:36 by gustl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void write_error(void)
{
	char *msg;

	msg = "ERROR";
	write(1, msg, strlen(msg));
}

int main(int ac, char *av[])
{
	// int n;
	t_num *dict = (t_num *)malloc(1000);
	parse_dict(dict);

	if (ac != 2)
	{
		write_error();
		return (0);
	}
	// n = ft_atoi(av[1]);
	//  if (n < 1 || n > 100)
	//  	write(1, "Choisissez un nombre entre 1 et 100", 36);
	num_to_words(dict, av[1], 0);

	return (0);
}
