/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:05:22 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/11 18:38:32 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int	minus_count;

	nbr = 0;
	minus_count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			minus_count++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + (*str - 48);
		++str;
	}
	if (minus_count % 2 == 0)
		return (nbr);
	return (-nbr);
}
/*#include <stdio.h>
int	main(void)
{	
	char test[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(test));
	return (0);
}*/
