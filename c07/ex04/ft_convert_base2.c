/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:33:37 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/23 10:50:11 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
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

int	is_inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long	nbr;
	int		sign;
	int		base_size;
	int		i;

	base_size = is_valid(base);
	if (!base_size)
		return (0);
	nbr = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] && is_inbase(str[i], base) != -1)
	{
		nbr = (nbr * base_size) + is_inbase(str[i], base);
		i++;
	}
	return (nbr * sign);
}
