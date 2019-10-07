/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:04:48 by mburl             #+#    #+#             */
/*   Updated: 2019/09/11 15:37:44 by mburl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_c;
	char	*dst_c;
	size_t	i;

	if (src == dst)
		return (dst);
	src_c = (char *)src;
	dst_c = (char *)dst;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			dst_c[i] = src_c[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	return (dst);
}
