/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:59:11 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/04 14:18:25 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = size - 1;
	i = 0;
	while (i < j)
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		i++;
		j--;
	}
}

/*int main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 5);
	printf("\n");
	i = 0;
	while (i < 5)
    {
        printf("%d ", tab[i]);
        i++;
    }
	return (0);
}*/
