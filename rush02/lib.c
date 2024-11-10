/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustl <gustl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:09:51 by mlavergn          #+#    #+#             */
/*   Updated: 2024/07/20 23:28:23 by gustl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void write_string(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}


char	*getmult(char *num)
{
	int len = ft_strlen(num);
	if (len > 40)
		return (NULL);
	if (len >= 37)
		return ("1000000000000000000000000000000000000");
	if (len >= 34)
		return ("1000000000000000000000000000000000");
	if (len >= 31)
		return ("1000000000000000000000000000000");
	if (len >= 28)
		return ("1000000000000000000000000000");
	if (len >= 25)
		return ("1000000000000000000000000");
	if (len >= 22)
		return ("1000000000000000000000");
	if (len >= 19)
		return ("1000000000000000000");
	if (len >= 16)
		return ("1000000000000000");
	if (len >= 13)
		return ("1000000000000");
	if (len >= 10)
		return ("1000000000");
	if (len >= 7)
		return ("1000000");
	if (len >= 4)
		return ("1000");
	if (len >= 3)
		return ("100");
	return (NULL);
}

char	*getdec(char *num)
{
	int x = ft_atoi(num);
	if (x > 90)
		return ("90");
	if (x > 80)
		return ("80");
	if (x > 70)
		return ("70");
	if (x > 60)
		return ("60");
	if (x > 50)
		return ("50");
	if (x > 40)
		return ("40");
	if (x > 30)
		return ("30");
	if (x > 20)
		return ("20");
	return (num);

}

char *find_in_dict(t_num *dict, char *num)
{
	int i;

	i = 0;
	while (dict[i].key)
	{
		if (ft_strcmp(dict[i].key, num) == 0)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

void num_to_words(t_num *dict, char *num, int index)
{
	char *s = find_in_dict(dict, num);
	int	len = ft_strlen(num);
	char	*cur = ft_strndup(num, 0, len - index - 1);
	int	curlen = ft_strlen(cur);
	if (s)
		write_string(s);
	if (curlen < 3)


	if (curlen > 3)
	{
		
		num_to_words(dict, num, index + 3);


		num_to_words(dict, cur, index + 2);

	}
	if (len == 3)
	{
		num_to_words(dict, ft_strndup(cur, curlen - 2, curlen - 2), index + 2);
		num_to_words(dict, ft_strndup(num, 2, len - 1), 0);
	}
	
}

int ft_atoi(char *str)
{
	int nbr;
	int minus_count;

	nbr = 0;
	minus_count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			minus_count++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + (*str - 48);
		++str;
	}
	if (minus_count % 2 == 0)
		return (nbr);
	return (-nbr);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strndup(char *src, int start, int end)
{
	int	i;
	char *dst;

	dst = (char *)malloc(sizeof(char) * (end - start + 2));
	if (dst == NULL)
		return (NULL);

	i = 0;
	while (src[i] != '\0' && i + start <= end)
	{
		dst[i] = src[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dst = (char *)malloc(i * (sizeof(char) + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}