/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:00:41 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/13 16:00:43 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char *c;

	c = NULL;
	while (*string != '\0' || *string == (char)symbol)
	{
		if (*string == (char)symbol)
			c = (char *)string;
		if (*string == (char)symbol && (char)symbol == '\0')
			return ((char *)string);
		string++;
	}
	return ((char *)c);
}
