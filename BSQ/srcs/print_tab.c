/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecartuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:25:55 by lecartuy          #+#    #+#             */
/*   Updated: 2024/07/23 16:27:06 by lecartuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void    ft_printabstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}