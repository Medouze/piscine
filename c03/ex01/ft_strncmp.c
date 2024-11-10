/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:11:00 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/10 13:49:25 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char test1[] = "rww";
	char test2[] = "test554488565665646";
	int t;
	int t2;

	t = ft_strncmp(test1,test2,10);
	t2 = strncmp(test1,test2,10);
	printf("%d ",t);
	printf("%d ",t2);
	return (0);
}*/
