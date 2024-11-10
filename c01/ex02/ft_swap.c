/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:56:31 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/04 10:24:13 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main(void)
{
	int a = 1;
	int b = 2;
	printf("test a 1 :%d\n",a);
    printf("test b 1 :%d\n",b);
	ft_swap(&a,&b);
	printf("test a 2 :%d\n",a);
	printf("test b 2 :%d\n",b);
	return (0);
}*/
