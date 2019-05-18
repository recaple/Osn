/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:23:42 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/13 13:31:33 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *src, size_t n)
{
	if (destination == NULL && src == NULL)
		return (0);
	if (!((int *)destination > (int *)src
		&& (int *)src + n > (int *)destination))
		ft_memcpy(destination, src, n);
	else
		while (n-- > 0)
			*((char *)destination + n) = *((char *)src + n);
	return (destination);
}
