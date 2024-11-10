/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:24:41 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/08 17:25:20 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	i++;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (!((str[i - 1] >= 65 && str[i - 1] <= 90)
				|| (str[i - 1] >= 97 && str[i - 1] <= 122)
				|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] -32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char test[] = "tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s ",test);
	ft_strcapitalize(test);
	printf("%s ",test);
	return (0);
}*/
