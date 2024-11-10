/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:54:48 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/11 16:05:43 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab [i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*int main(void)
{
	int tab[5] = {4, 3, 2, 0, 1};
	int i;

	i = 0;
	while (i < 5)
    {
        printf("%d ", tab[i]);
        i++;
    }
	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
    {
        printf("%d ", tab[i]);
        i++;
    }
	return (0);
}*/
