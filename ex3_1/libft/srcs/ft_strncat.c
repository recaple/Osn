/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 20:42:46 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/05 19:14:39 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int i;
	int a;

	i = -1;
	a = 0;
	while (dest[a] != '\0')
		a++;
	while (src[++i] != '\0' && i < (int)nb)
		dest[a + i] = src[i];
	dest[a + i] = '\0';
	return (dest);
}
