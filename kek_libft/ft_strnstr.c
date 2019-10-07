/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:15:17 by abenton           #+#    #+#             */
/*   Updated: 2019/09/18 11:06:28 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len1;

	len1 = 0;
	if (*needle == 0)
		return ((char *)haystack);
	len1 = ft_strlen(needle);
	while (*haystack != 0 && len-- >= len1)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, len1) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
