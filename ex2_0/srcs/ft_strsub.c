/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:41:32 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/28 14:41:33 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnew(size_t size);

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *c;
	int i;

	i = -1;
	if (!(c = ft_strnew(len)))
		return (NULL);
	while (++i != (int)len)
		c[i] = s[start + i];
	return (c);
}
