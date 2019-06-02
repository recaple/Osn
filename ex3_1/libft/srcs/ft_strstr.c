/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 13:40:55 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/14 13:40:57 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *string1, const char *string2)
{
	int	i;
	int	j;

	i = -1;
	if (!*string2)
		return ((char *)string1);
	while (string1[++i])
	{
		j = 0;
		while (string1[i + j] == string2[j]
			&& string1[i + j] && string2[j])
			j++;
		if (!string2[j])
			return ((char *)&string1[i]);
	}
	return (NULL);
}
