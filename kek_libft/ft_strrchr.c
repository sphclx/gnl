/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:51:50 by abenton           #+#    #+#             */
/*   Updated: 2019/09/18 11:06:05 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = (0);
	while (*s)
	{
		if (*s == (char)c)
			res = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (res);
}
