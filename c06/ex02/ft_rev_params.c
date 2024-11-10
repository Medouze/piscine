/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:00:16 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/12 11:30:06 by mlavergn         ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr_argv(argv, i);
		i--;
	}
	return (0);
}
