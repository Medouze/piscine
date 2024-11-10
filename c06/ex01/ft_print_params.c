/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:17:18 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/12 11:29:50 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_argv(char *argv[], int i)
{
	int	j;

	j = 0;
	while (argv[i][j])
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr_argv(argv, i);
		i++;
	}
	return (0);
}
