/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:03:26 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/12 10:00:51 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	test_prime;

	if (nb < 2)
		return (2);
	test_prime = ft_is_prime(nb);
	while (test_prime == 0)
	{
		nb ++;
		test_prime = ft_is_prime(nb);
	}
	return (nb);
}
/*#include <stdio.h>
  int main(void)
  {
  int prem = 55;
  printf("%d ",ft_find_next_prime(prem));
  return (0);
 }*/
