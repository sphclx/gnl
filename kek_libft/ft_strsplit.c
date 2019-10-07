/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:13:21 by abenton           #+#    #+#             */
/*   Updated: 2019/09/18 13:07:17 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_find(char const *str, int i, char **res, char c)
{
	int	space;
	int	len;

	len = 0;
	space = 0;
	while (*str == c)
	{
		str++;
		space++;
	}
	while (str[len] && str[len] != c)
		len++;
	if (len > 0)
	{
		res[i] = ft_strnew(len);
		ft_strncpy(res[i], str, len);
	}
	return (len + space);
}

static int		ft_count(char const *str, int i, char c)
{
	while (*str)
	{
		while (*str && *str != c)
			str++;
		while (*str == c)
			str++;
		i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		w;
	int		len;
	int		i;

	if (!s || !(res = (char **)ft_memalloc((ft_count(s, 0, c) + 1) *
					sizeof(char *))))
		return (NULL);
	w = ft_count(s, 0, c);
	i = 0;
	len = 0;
	while (*s)
	{
		len = ft_find(s, i++, res, c);
		s += len;
	}
	res[w] = 0;
	return (res);
}
