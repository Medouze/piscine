/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:25:52 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/14 16:30:15 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid(char *base)
{
	int	base_size;
	int	i;
	int	j;

	base_size = ft_strlen(base);
	if (base_size <= 1)
		return (0);
	i = 0;
	while (i < base_size)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < base_size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (base_size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	n;

	base_size = is_valid(base);
	if (base_size > 1)
	{
		n = nbr;
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= base_size)
		{
			ft_putnbr_base(n / base_size, base);
			ft_putnbr_base(n % base_size, base);
		}
		else
			ft_putchar(base[n]);
	}
}
/*#include <stdio.h>
int main(void)
{
	char base[] = "0";
	int nbr = -1022;
	ft_putnbr_base(nbr, base);
	//nbr2 = is_valid(base);
	//printf("%d ",nbr2);
	return (0);
}*/
