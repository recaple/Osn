/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:14:24 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/13 13:14:26 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memptr, int val, size_t num)
{
	size_t i;

	i = -1;
	while (++i < num)
		if (((unsigned char *)memptr)[i] == (unsigned char)val)
			return ((void *)(memptr + i));
	return (NULL);
}
