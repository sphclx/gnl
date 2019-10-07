/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:23:58 by mburl             #+#    #+#             */
/*   Updated: 2019/09/13 18:35:28 by mburl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *needle)
{
	int i;

	if (!*needle && !*str)
		return ((char *)str);
	if (!*needle)
		return ((char *)str);
	while (*str)
	{
		i = 0;
		while (str[i] == needle[i] && needle[i])
			i++;
		if (!needle[i])
			return ((char *)str);
		str++;
	}
	return (0);
}
