/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:15:22 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/08 09:49:58 by mlavergn         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	src_size;
	int	i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = 0;
	while (i < src_size)
	{
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	return (dest);
}

/*int main(void)
{
	char test[50] = "test";
	char test2[50] = "bjr";

	printf("%s\n", test);
	printf("%s\n", test2);
	ft_strcat(test, test2);
	printf("%s\n", test);

	return (0);
}*/
