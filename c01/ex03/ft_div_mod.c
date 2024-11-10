/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:29:57 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/03 16:37:31 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int	a;
	int	b;
	int mod;
	int div;
	
	a = 9;
	b = 5;
	ft_div_mod(a,b,&div,&mod);
	printf("a ; %d",a);
	printf("b ; %d",b);
	printf("div ; %d",div);
	printf("mod ; %d",mod);
	return (0);
}*/
