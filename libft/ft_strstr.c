/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:38:29 by abenton           #+#    #+#             */
/*   Updated: 2019/09/18 11:06:17 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	if (!*needle && !*haystack)
		return ((char *)haystack);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i])
			i++;
		if (!needle[i])
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
