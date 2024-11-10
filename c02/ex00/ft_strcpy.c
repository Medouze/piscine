/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:48:04 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/04 12:45:53 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*int main(void)
{
	char	test[5] = "test";
	char 	test2[5];
	int i;

	printf("%s ", test);
	ft_strcpy(test2, test);
	printf("%s ", test2);

	return (0);
}*/
