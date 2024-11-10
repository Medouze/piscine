/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:28:44 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/09 12:50:00 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if ((power == 0 && nb == 0) || power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int main(void)
{
	int nbr = 7;
	nbr = ft_recursive_power(nbr, 5);
	printf("%d ", nbr);
	return (0);
}*/
