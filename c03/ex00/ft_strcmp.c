/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:41:01 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/07 17:04:33 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	nbr;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	nbr = s1[i] - s2[i];
	return (nbr);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char test1[] = "test";
	char test2[] = "test";
	int t;
	int nb;
	
	t = ft_strcmp(test1,test2);
	nb = strcmp(test1,test2);
	printf("%d ",t);
	printf("%d ",nb);
	return (0);
}*/
