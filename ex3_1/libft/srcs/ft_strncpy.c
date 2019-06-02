/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:00:09 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/05 19:12:08 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;

	i = -1;
	while (src[++i] != '\0' && i < (int)n)
		dest[i] = src[i];
	while (i < (int)n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
