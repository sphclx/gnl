/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:12:31 by mburl             #+#    #+#             */
/*   Updated: 2019/09/04 15:28:09 by mburl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pt;
	unsigned char	*pt2;
	size_t			i;

	if (n == 0)
		return (0);
	pt = (unsigned char*)s1;
	pt2 = (unsigned char*)s2;
	i = 0;
	while (*pt == *pt2 && ++i < n)
	{
		pt++;
		pt2++;
	}
	return ((int)(*pt - *pt2));
}
