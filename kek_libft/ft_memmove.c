/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:20:04 by abenton           #+#    #+#             */
/*   Updated: 2019/09/17 14:23:21 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*source;
	unsigned char		*dest;

	i = 0;
	if (dst == src)
		return (dst);
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	if (source < dest)
	{
		while (++i <= len)
			dest[len - i] = source[len - i];
	}
	else
	{
		while (len-- > 0)
			*(dest++) = *(source++);
	}
	return (dst);
}
