/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:51:50 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/16 13:10:24 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	result;

	result = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * result);
	if (*range == NULL)
		return (-1);
	while (i < result)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main(void)
{
	int *tab;
	int i;
	int size;
	size = ft_ultimate_range(&tab, 8,14);
	i = 0;
	while (i < size)
	{
		printf("%d ",tab[i]);
		i++;
	}
}*/