/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:10:05 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/22 14:08:31 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	operator_valid(char c, int nbr2)
{
	if (!(c == '+' || c == '-' || c == '*' || c == '/' || c == '%'))
	{
		ft_putstr("0\n");
		return (0);
	}
	else if (c == '/' && nbr2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (c == '%' && nbr2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	make_operation(int nbr1, int nbr2, char operator)
{
	int	result;
	int	(*op[5])(int, int);

	op[0] = &addition;
	op[1] = &substraction;
	op[2] = &division;
	op[3] = &multiplication;
	op[4] = &modulo;
	if (operator_valid(operator, nbr2) == 0)
		return (0);
	if (operator == '+')
		result = op[0](nbr1, nbr2);
	if (operator == '-')
		result = op[1](nbr1, nbr2);
	if (operator == '/')
		result = op[2](nbr1, nbr2);
	if (operator == '*')
		result = op[3](nbr1, nbr2);
	if (operator == '%')
		result = op[4](nbr1, nbr2);
	return (result);
}

int	main(int ac, char **av)
{
	int		nbr1;
	int		nbr2;
	int		result;
	char	op;

	if (ac == 4)
	{
		nbr1 = ft_atoi(av[1]);
		nbr2 = ft_atoi(av[3]);
		op = av[2][0];
		if (operator_valid(op, nbr2))
		{
			result = make_operation(nbr1, nbr2, op);
			ft_putnbr(result);
			ft_putchar('\n');
		}
	}
	return (0);
}
