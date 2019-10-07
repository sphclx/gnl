/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburl <mburl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:32:17 by mburl             #+#    #+#             */
/*   Updated: 2019/10/02 14:42:40 by mburl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
