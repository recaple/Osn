/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 21:46:09 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/18 21:46:12 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	char	*c;
	int	b;

	b = -1;
	i = ft_strlen(s1);
	i += ft_strlen(s2);
	if (!(c = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		c[++b] = (char)s1[i];
	i = -1;
	while (s2[++i] != '\0')
		c[++b] = (char)s2[i];
	c[++b] = '\0';
	return (c);
}
