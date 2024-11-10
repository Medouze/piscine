/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:03:40 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/21 15:17:09 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	addition(int nbr1, int nbr2)
{
	return (nbr1 + nbr2);
}

int	substraction(int nbr1, int nbr2)
{
	return (nbr1 - nbr2);
}

int	multiplication(int nbr1, int nbr2)
{
	return (nbr1 * nbr2);
}

int	division(int nbr1, int nbr2)
{
	return (nbr1 / nbr2);
}

int	modulo(int nbr1, int nbr2)
{
	return (nbr1 % nbr2);
}
