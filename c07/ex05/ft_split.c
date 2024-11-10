/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:39:00 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/22 12:39:05 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_charset(str[i], charset) == 1)
			i++;
		if (str[i])
			count++;
		while (str[i] && check_charset(str[i], charset) == 0)
			i++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && (check_charset(str[i], charset) == 0))
		i++;
	return (i);
}

char	*fill_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*tab;

	len = word_len(str, charset);
	tab = malloc((len + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**stock;
	int		count;

	count = 0;
	stock = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (stock == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && (check_charset(*str, charset) == 1))
			str++;
		if (*str)
		{
			stock[count] = fill_word(str, charset);
			count++;
		}
		while (*str && check_charset(*str, charset) == 0)
			str++;
	}
	stock[count] = 0;
	return (stock);
}

/*int main(int ac, char** av)
{
	if (ac == 3)
	{
		char **test = ft_split(av[1], av[2]);
		int i = 0;
		while (test[i] != 0)
		{
    		printf("%s\n", test[i]);
			i++;
		}
	} 
    return (0);
}*/