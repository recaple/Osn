/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:18:25 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/19 19:06:01 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		b;
	char	*ret;
	int		m;

	i = 0;
	m = -1;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	b = ft_strlen((char *)s) - 1;
	if (!(ret = (char *)malloc(sizeof(char) * (b - i + 1))))
		return (NULL);
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b--;
	while (i <= b)
		ret[++m] = s[i++];
	ret[++m] = '\0';
	return (ret);
}
