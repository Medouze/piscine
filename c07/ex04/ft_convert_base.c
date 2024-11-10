/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:33:33 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/24 09:54:40 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);
int	is_valid(char *base);

int	len(int nb, char *base_to)
{
	int	len;
	int	base_len;

	base_len = ft_strlen(base_to);
	len = 0;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= base_len)
	{
		nb = nb / base_len;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int nb, char *base_to, int base_size)
{
	char	*nbr;
	int		nb_len;

	nb_len = len(nb, base_to);
	nbr = malloc((nb_len + 1) * sizeof(char));
	if (nbr == NULL)
		return (NULL);
	nbr[nb_len--] = '\0';
	if (nb == 0)
	{
		nbr[0] = base_to[0];
		return (nbr);
	}
	if (nb < 0)
	{
		nbr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		nbr[nb_len--] = base_to[nb % base_size];
		nb /= base_size;
	}
	return (nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	base_decimal;
	int	base_size;

	if (is_valid(base_from) && is_valid(base_to))
	{
		base_size = ft_strlen(base_to);
		base_decimal = ft_atoi_base(nbr, base_from);
		return (ft_itoa(base_decimal, base_to, base_size));
	}
	return (NULL);
}
/*int	main(int ac, char **av)
{
	(void)ac;
    printf("%s",ft_convert_base(av[1], av[2], av[3]));
	return (0);
}*/