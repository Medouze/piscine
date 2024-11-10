/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:31:20 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/11 20:41:12 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

void	sort_arg(char *test[], int argc)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(test[i], test[j]) > 0)
			{
				temp = test[i];
				test[i] = test[j];
				test[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	print_arg(char *test[], int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < ft_strlen(test[i]))
		{
			write(1, &test[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	sort_arg(argv, argc);
	print_arg(argv, argc);
	return (0);
}
