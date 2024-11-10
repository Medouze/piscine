/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:18:31 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/09 16:58:43 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (nb > 0)
	{
		nb -= i;
		i = i + 2;
		j++;
	}
	if (nb == 0)
		return (j);
	else
		return (0);
}

/*int main(void)
{
	int test;
	test = ft_sqrt(17);
	printf("%d ",test);
	return (0);
}*/
