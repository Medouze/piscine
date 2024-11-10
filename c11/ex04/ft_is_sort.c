/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:36:16 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/22 12:09:12 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	compare(int nb, int nb2)
{
	if (nb < nb2)
		return (-1);
	else if (nb > nb2)
		return (1);
	else
		return (0);
}*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort1;
	int	sort2;

	sort1 = 1;
	sort2 = 2;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			sort1 = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			sort2 = 0;
		i++;
	}
	return (sort1 || sort2);
}

/*#include <stdio.h>
int main(void)
{
	int test1[8] = {8,7,6,5,4,3,2,1};
	printf("%d ",ft_is_sort(test1,8,&compare));
	return (0);
}*/