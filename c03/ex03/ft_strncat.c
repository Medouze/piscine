/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:26:46 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/08 10:08:28 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	char test[50] = "test";
	char test2[50] = "bjr";

	printf("%s\n", test);
	printf("%s\n", test2);
	ft_strncat(test, test2,1);
	printf("%s\n", test);

	return (0);
}*/
