/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:22:27 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/09 12:16:59 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printnbr(int nbr)
{
	int	nb1;
	int	nb2;

	if (nbr > 9)
	{
		nb1 = nbr / 10;
		nb2 = nbr % 10;
		ft_putchar(nb1 + '0');
		ft_putchar(nb2 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nbr + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			printnbr(i);
			ft_putchar(' ');
			printnbr(j);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

/*int main(void)
{
    ft_print_comb2();
    return 0;
}*/
