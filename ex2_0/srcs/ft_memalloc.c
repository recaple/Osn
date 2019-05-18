/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 13:14:39 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/18 13:14:42 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void    *ft_memset(void *__b, int __c, size_t __len);

void	*ft_memalloc(size_t size)
{
	void *v;
	
	v = (void *)malloc(size);
	if (v == NULL)
		return (NULL);
	ft_memset(v, 0, size);
	return (v);
}
