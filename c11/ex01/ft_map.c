/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:49:32 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/20 12:06:22 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>

int add(int nbr)
{
    nbr++;
    return nbr;
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*mod;
	int	i;

	i = 0;
	mod = malloc(sizeof(int) * length);
	if (mod == NULL)
		return (0);
	while (i < length)
	{
		mod[i] = f(tab[i]);
		i++;
	}
	return (mod);
}

/*int main(void)
{
    int *test;
    int *mod;
    int i = 0;
    int size = 10;

    test = malloc(sizeof(int) * size);
    if (test == NULL)
        return (0);
    while (i < size)
    {
        test[i] = i;
        printf("%d ", test[i]);
        i++;
    }
    printf("\n");
    mod = ft_map(test, size, &add);
    i = 0;
    while (i < size)
    {
        printf("%d ", mod[i]);
        i++;
    }
    printf("\n");
    return 0;
}*/