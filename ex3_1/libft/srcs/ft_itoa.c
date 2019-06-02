/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 19:11:00 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/05/04 15:41:16 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_retnum(int n)
{
	size_t i;

	i = 0;
	if (n < 0)
		i = 1;
	if (ft_abc(n / 1000000000) != 0)
		return (10 + i);
	if (ft_abc(n % 1000000000) / 100000000 != 0
		|| (ft_abc(n / 1000000000) != 0))
		return (9 + i);
	if (ft_abc(n % 100000000) / 10000000 != 0 || (ft_abc(n / 100000000) != 0))
		return (8 + i);
	if (ft_abc(n % 10000000) / 1000000 != 0 || (ft_abc(n / 10000000) != 0))
		return (7 + i);
	if (ft_abc(n % 1000000) / 100000 != 0 || (ft_abc(n / 1000000) != 0))
		return (6 + i);
	if (ft_abc(n % 100000) / 10000 != 0 || (ft_abc(n / 100000) != 0))
		return (5 + i);
	if (ft_abc(n % 10000) / 1000 != 0 || (ft_abc(n / 10000) != 0))
		return (4 + i);
	if (ft_abc(n % 1000) / 100 != 0 || (ft_abc(n / 1000) != 0))
		return (3 + i);
	if (ft_abc(n % 100) / 10 != 0 || (ft_abc(n / 100) != 0))
		return (2 + i);
	return (1 + i);
}

static char		*ft_putval(int i, int n, char *c)
{
	if (n < 0)
		c[++i] = '-';
	if (ft_abc(n / 1000000000) != 0)
		c[++i] = '0' + ft_abc(n / 1000000000);
	if (ft_abc(n % 1000000000) / 100000000 != 0
		|| (ft_abc(n / 1000000000) != 0))
		c[++i] = '0' + (ft_abc(n % 1000000000) / 100000000);
	if (ft_abc(n % 100000000) / 10000000 != 0 || (ft_abc(n / 100000000) != 0))
		c[++i] = '0' + (ft_abc(n % 100000000) / 10000000);
	if (ft_abc(n % 10000000) / 1000000 != 0 || (ft_abc(n / 10000000) != 0))
		c[++i] = '0' + (ft_abc(n % 10000000) / 1000000);
	if (ft_abc(n % 1000000) / 100000 != 0 || (ft_abc(n / 1000000) != 0))
		c[++i] = '0' + (ft_abc(n % 1000000) / 100000);
	if (ft_abc(n % 100000) / 10000 != 0 || (ft_abc(n / 100000) != 0))
		c[++i] = '0' + (ft_abc(n % 100000) / 10000);
	if (ft_abc(n % 10000) / 1000 != 0 || (ft_abc(n / 10000) != 0))
		c[++i] = '0' + (ft_abc(n % 10000) / 1000);
	if (ft_abc(n % 1000) / 100 != 0 || (ft_abc(n / 1000) != 0))
		c[++i] = '0' + (ft_abc(n % 1000) / 100);
	if (ft_abc(n % 100) / 10 != 0 || (ft_abc(n / 100) != 0))
		c[++i] = '0' + (ft_abc(n % 100) / 10);
	c[++i] = '0' + ft_abc(n % 10);
	c[++i] = '\0';
	return (c);
}

char			*ft_itoa(int n)
{
	char	*c;
	size_t	i;
	int		in;

	in = -1;
	i = ft_retnum(n) + 1;
	if (!(c = ft_memalloc(i)))
		return (NULL);
	c = ft_putval(in, n, c);
	return (c);
}
