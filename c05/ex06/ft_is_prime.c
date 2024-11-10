/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:01:13 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/18 18:00:56 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;	

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
int main(void)
{
	int prem = 2147483647;
	printf("%d ",ft_is_prime(prem));
	return (0);
}
