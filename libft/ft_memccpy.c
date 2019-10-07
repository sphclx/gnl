/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:50:18 by mburl             #+#    #+#             */
/*   Updated: 2019/09/04 17:08:54 by mburl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*pt_dst;
	unsigned char		*pt_src;
	size_t				i;

	pt_dst = (unsigned char*)dst;
	pt_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		pt_dst[i] = pt_src[i];
		if (pt_dst[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
		i++;
	}
	return (NULL);
}
