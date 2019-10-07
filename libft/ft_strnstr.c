/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:25:41 by mburl             #+#    #+#             */
/*   Updated: 2019/09/04 20:42:50 by mburl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t len1;

	len1 = 0;
	if (*needle == 0)
		return ((char *)str);
	len1 = ft_strlen(needle);
	while (*str != 0 && len-- >= len1)
	{
		if (*str == *needle && ft_memcmp(str, needle, len1) == 0)
			return ((char *)str);
		str++;
	}
	return (0);
}
