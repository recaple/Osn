/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 13:35:37 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/18 13:35:39 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void    *ft_memalloc(size_t size);

char	*ft_strnew(size_t size)
{
	char *c;

	if (!(c = ft_memalloc(size + 1)))
		return (NULL);
	while (size != 0)
	{
		c[size] = '\0';
		size--;
	}
	return (c);
}
