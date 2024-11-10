/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:09:21 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/16 20:59:01 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	result;

	i = 0;
	result = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (result));
	if (tab == NULL)
		return (NULL);
	while (i < result)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*#include <stdio.h>
int main(void)
{
	int *tab;
	int i; 
	i = 0;
	int min = 1;
	int max = 100;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d ",tab[i]);
		i++;
	}
}*/
