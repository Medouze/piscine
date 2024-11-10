/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:12:18 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/14 11:12:34 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	i;

	dest_size = ft_strlen(dest);
	i = 0;
	while (src && src[i])
	{
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	return (dest);
}

int	total_len(int size, char **strstr, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		len += ft_strlen(strstr[i]);
		i++;
	}
	return (len);
}

void	fill_arr(char *str, char **strs, char *sep, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	if (!size)
	{
		str = malloc(1 * sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	len = total_len(size, strs, sep);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = -1;
	fill_arr(str, strs, sep, size);
	str[len] = '\0';
	return (str);
}

/*int	main(int ac, char **av)
{
	char	*str;

	str = ft_strjoin(ac, av, "salut");
	printf("%s", str);
	return (0);
}*/
