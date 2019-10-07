/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:59:41 by abenton           #+#    #+#             */
/*   Updated: 2019/09/18 11:25:36 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*str;
	char	*res;

	if (!s || !(res = ft_memalloc(ft_strlen((char*)s) + 1)) || !f)
		return (0);
	ptr = (char *)s;
	str = res;
	while (*ptr)
		*(str++) = f(*(ptr++));
	return (res);
}
