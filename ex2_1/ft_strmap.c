/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:23:03 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/05/04 13:42:06 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*st;
	char	*d;
	int		i;

	st = (char *)s;
	if (st && f)
	{
		i = -1;
		if (!(d = ft_memalloc(ft_strlen((char*)st) + 1)))
			return (NULL);
		while (s[++i])
			d[i] = (*f)(s[i]);
		d[i] = '\0';
		return (d);
	}
	return (NULL);
}
