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

#include <string.h>
#include <stdlib.h>

void	*ft_memchr(void *memptr, int val, size_t num)
{
	int i;

	i = -1;
	while (++i < (int)num)
	{
		if (((unsigned char *)memptr)[i] == (unsigned char)val)
			return ((void *)memptr + i);
		if (((unsigned char *)memptr)[i] == '\0')
			return (NULL);
	}
	return (NULL);
}
