/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lderidde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:33:54 by lderidde          #+#    #+#             */
/*   Updated: 2024/07/06 12:37:59 by lderidde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_line(int col_num, char first_last, char other)
{
	int	i;

	i = 0;
	while (i < col_num)
	{
		if (i == 0 || i == col_num - 1)
			ft_putchar (first_last);
		else
			ft_putchar(other);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	i;

	i = 1;
	if (a > 0 && b > 0)
	{
		while (i <= b)
		{
			if (i == 1 || i == b)
				write_line(a, 'o', '-');
			else
				write_line(a, '|', ' ');
			i++;
		}
	}
	else
		write (1, "Les nombres doivent etre superieur a 0", 38);
}
