/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavergn <mlavergn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:07:03 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/21 15:38:12 by mlavergn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		addition(int nbr1, int nbr2);
int		substraction(int nbr1, int nbr2);
int		multiplication(int nbr1, int nbr2);
int		division(int nbr1, int nbr2);
int		modulo(int nbr1, int nbr2);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif