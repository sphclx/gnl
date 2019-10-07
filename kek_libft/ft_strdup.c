/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <abenton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:31:42 by abenton           #+#    #+#             */
/*   Updated: 2019/10/04 16:36:16 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (s1[size])
		++size;
	if (!(new = (char *)malloc(sizeof(*new) * size + 1)))
		return (NULL);
	while (i < size)
	{
		new[i] = s1[i];
		i++;
	}
	new[size] = '\0';
	return (new);
}
