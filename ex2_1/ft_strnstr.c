/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 13:40:55 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/29 19:16:05 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *string1, const char *string2, size_t len)
{
	size_t		i;
	size_t		j;

	if (ft_strlen((char *)string2) == 0)
		return ((char *)string1);
	i = 0;
	j = 0;
	while (string1[i] && i < len)
	{
		while (string1[i] && string2[j] && string1[i] == string2[j] && i < len)
		{
			i++;
			j++;
		}
		if (j == (size_t)ft_strlen(string2))
			return ((char *)string1 + i - j);
		else
			i = (i - j) + 1;
		j = 0;
	}
	return (NULL);
}
