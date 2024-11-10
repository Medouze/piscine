/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:07:55 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/15 19:34:10 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*stock;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	stock = malloc(sizeof(char) * (src_len + 1));
	if (stock == NULL)
		return (0);
	while (i < src_len)
	{
		stock[i] = src[i];
		i++;
	}
	stock[i] = '\0';
	return (stock);
}

/*#include <stdio.h>
int main(void)
{
	int test;
	char *str;
	str = ft_strdup();
	test = ft_strlen(str);
	printf(":%s:",str);
	return (0);
}*/
