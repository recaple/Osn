/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:41:32 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/05/04 13:43:50 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*c;
	int		i;

	i = -1;
	if (s && (int)len >= 0 && (c = ft_strnew(len)))
	{
		while (++i != (int)len)
			c[i] = s[start + i];
		return (c);
	}
	return (NULL);
}
