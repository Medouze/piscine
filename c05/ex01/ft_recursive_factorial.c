/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:56:00 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/10 12:02:37 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial (nb - 1));
}
/*#include <stdio.h>
int main(void)
{
	int nbr = 10;
	nbr = ft_recursive_factorial(nbr);
	printf("%d ", nbr);
	return (0);
}*/
