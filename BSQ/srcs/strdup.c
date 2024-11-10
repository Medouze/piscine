/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecartuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:27:56 by lecartuy          #+#    #+#             */
/*   Updated: 2024/07/23 16:28:05 by lecartuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char    *ft_strndup(char *src, int n)
{
    char    *dest;
    int     size;
    int     i;

    i = 0;
    size = n + 1;
    dest = malloc(sizeof(char) * size);
    if (!dest)
        return (NULL);
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
