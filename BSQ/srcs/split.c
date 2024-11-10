/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecartuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:24:16 by lecartuy          #+#    #+#             */
/*   Updated: 2024/07/23 16:25:34 by lecartuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_dup_str(char *src, int start, int end)
{
	char	*result;
	int		i;
	int		len;

	len = end - start;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = src[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		start;
	int		i;
	int		j;

	i = 0;
	j = 0;
	start = 0;
	result = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_check_sep(str[i], charset))
			i++;
		start = i;
		while (str[i] && !ft_check_sep(str[i], charset))
			i++;
		if (start < i)
			result[j++] = ft_dup_str(str, start, i);
	}
	result[j] = 0;
	return (result);
}
