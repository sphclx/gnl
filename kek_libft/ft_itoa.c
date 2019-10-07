/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:54:32 by abenton           #+#    #+#             */
/*   Updated: 2019/09/16 21:29:45 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_neg(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
}

char		*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		len;
	int		p;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	len = 2;
	p = n;
	ft_neg(&n, &neg);
	while ((p = p / 10))
		len++;
	len += neg;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (0);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = ((n % 10) + '0');
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
