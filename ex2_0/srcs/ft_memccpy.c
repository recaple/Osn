/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:17:24 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/15 15:47:53 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;
	size_t			i;

	src = (unsigned char *)source;
	dst = (unsigned char *)destination;
	i = -1;
	while (++i < n)
	{
		dst[i] = src[i];
		if (dst[i] == (unsigned char)c)
			return ((void *)destination + i + 1);
	}
	return (NULL);
}
