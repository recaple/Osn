/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:48:49 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/14 14:48:59 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t i;

	i = -1;
	while (++i != n)
	{
		if (((const unsigned char*)arr1)[i]
			!= ((const unsigned char*)arr2)[i])
			return ((int)(((const unsigned char*)arr1)[i]
				- ((const unsigned char*)arr2)[i]));
	}
	return (0);
}
