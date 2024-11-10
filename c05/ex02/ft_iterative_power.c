/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:43:44 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/09 10:57:02 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	else if ((power == 0 && nb == 0) || power == 0)
		return (1);
	else
	{
		i = 1;
		result = nb;
		while (i < power)
		{
			result = nb * result;
			i++;
		}
	}
	return (result);
}

/*#include <stdio.h>
int main(void)
{
	int nbr = 7;
	nbr = ft_iterative_power(nbr, 0);
	printf("%d ", nbr);
	return (0);
}*/
