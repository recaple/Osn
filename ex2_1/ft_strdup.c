/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 12:56:04 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/05/04 13:39:08 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(src);
	if (!(c = (char *)malloc(sizeof(*c) * len + 1)))
		return (NULL);
	while (++i < len)
		c[i] = src[i];
	c[i] = '\0';
	return (c);
}
