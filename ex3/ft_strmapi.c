/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:32:04 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/05/04 13:42:37 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		while (st[++i])
			d[i] = (*f)(i, st[i]);
		d[i] = '\0';
		return (d);
	}
	return (NULL);
}
