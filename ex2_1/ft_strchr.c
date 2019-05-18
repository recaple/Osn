/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:09:38 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/13 15:09:40 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	while (*string != '\0' || *string == (unsigned char)symbol)
	{
		if (*string == (unsigned char)symbol)
			return ((char *)string);
		string++;
	}
	return (NULL);
}
