/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:02:23 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/21 17:27:17 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j + 1])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>
int main(void)
{
	int i = 0;
	char	*test[5] = {"ghj", "vnm", "def", "abc", NULL};
	while(i < 4)
	{
		printf("%s ", test[i]);
		i++;
	}
	i = 0;
	ft_sort_string_tab(test);
	printf("\n");
	while (i < 4)
	{
		printf("%s ", test[i]);
		i++;
	}
    return (0);
}*/