/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:51:58 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/05 12:39:10 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int i, int j, int k)
{
	if (i == '7' && j == '8' && k == '9')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
	}
	else
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				write_number(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*int main(void)
{
	ft_print_comb();
	return (0);
}*/
