/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:43:16 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/03 16:51:37 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(void)
{
	int a;
	int	b;

	a = 10;
	b = 6;

	printf("test a 1 : %d\n",a);
	printf("test b 1 : %d\n",b);
	ft_ultimate_div_mod(&a,&b);
	printf("test div 1 : %d\n",a);
	printf("test mod 1 : %d\n",b);
	return (0);
}*/
