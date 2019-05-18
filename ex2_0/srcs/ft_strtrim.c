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

#include <stdlib.h>

int	ft_strlen(const char *c);

char	*ft_strtrim(char const *s)
{
	int		i;
	int		b;
	char	*ret;
	int		m;

	i = 0;
	m = -1;
	if (s[0] == '\0')
		return ((char*)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return ((char*)(s + i));
	b = ft_strlen(s) - 1;
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b--;
	ret = (char *)malloc(sizeof(char) * (b - i + 2));
	if (!ret)
		return (NULL);
	while (i != b + 1)
	{
		ret[++m] = s[i];
		i++;
	}
	ret[++m] = '\0';
	return (ret);
}
