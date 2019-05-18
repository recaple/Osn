/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:11:15 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/08 17:11:19 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		destlength;
	size_t		srclength;

	i = 0;
	destlength = ft_strlen(dest);
	srclength = ft_strlen(src);
	if (n <= destlength)
		return (srclength + n);
	while ((dest[i] != '\0') && i < (n - 1))
		i++;
	while (*src && i < (n - 1))
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (destlength + srclength);
}
