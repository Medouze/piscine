/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecartuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:00:01 by lecartuy          #+#    #+#             */
/*   Updated: 2024/07/23 16:29:11 by lecartuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>

char    **ft_split(char *str, char *charset);
void    ft_printabstr(char *str);
char	*ft_strndup(char *src, int n);
#endif
