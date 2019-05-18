/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:40:52 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/06 14:47:16 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	int				i;
	unsigned char	c1;

	c1 = c;
	i = -1;
	while (++i != (int)n)
		((unsigned char*)destination)[i] = c1;
	return (destination);
}
