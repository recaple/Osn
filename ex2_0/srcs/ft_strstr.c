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

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strlen(const char *c);

char	*ft_strstr(char *string1, const char *string2)
{
	int i;

	i = -1;
	if (string2[0] == '\0')
		return (string1);
	while (((const unsigned char*)string1)[++i] != '\0')
		if (!ft_strncmp((string1 + i), string2, ft_strlen(string2) - 1))
			return (string1 + i);
	return (NULL);
}
