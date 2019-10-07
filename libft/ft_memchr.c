/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:09:16 by mburl             #+#    #+#             */
/*   Updated: 2019/09/04 15:11:56 by mburl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pt;
	size_t			i;

	i = 0;
	pt = (unsigned char*)s;
	while (++i <= n)
	{
		if (*(pt++) == (unsigned char)c)
			return ((void*)--pt);
	}
	return (0);
}
