/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:58:05 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/16 14:14:17 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	i = 0;
	stock = malloc((ac + 1) * sizeof(t_stock_str));
	if (stock == NULL)
		return (NULL);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].copy = 0;
	stock[i].size = 0;
	return (stock);
}

/*int main(int ac, char **av)
{
	t_stock_str *test;
	test = ft_strs_to_tab(ac, av);
	int	i;
	i = 0;
	while (i < ac)
	{
		printf("%s\n", test[i].str);
		i++;
	}
    return (0);
}*/