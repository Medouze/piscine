/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:33:15 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/09 10:39:26 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		i = 2;
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
#include <stdio.h>
int main(void)
{
	int nbr = 10;
	nbr = ft_iterative_factorial(nbr);
	printf("%d ", nbr);
	return (0);
}
