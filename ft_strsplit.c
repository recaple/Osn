/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:33:52 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/05/04 14:22:30 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		char_len(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static	char	**get_mass(char const *str, char d)
{
	int		i;
	int		count;
	int		a[char_len(str)];
	int		j;
	char	**c;

	i = -1;
	j = -1;
	while (++j < char_len(str))
		a[j] = 0;
	count = 0;
	while (str[i + 1] == d)
		i++;
	while (str[++i] != '\0')
		if (str[i] != d)
			++a[count];
		else if ((str[i + 1] != d) && (str[i + 1] != '\0'))
			count++;
	if (!(c = (char **)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	j = -1;
	while (++j <= count)
		if (!(c[j] = (char *)malloc(sizeof(char) * (a[j]))))
			return (NULL);
	return (c);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		o;
	int		j;
	char	**ch;

	if (!s)
		return (NULL);
	if (!(ch = get_mass(s, c)))
		return (NULL);
	i = -1;
	j = 0;
	o = -1;
	while (s[i + 1] == c)
		i++;
	while (s[++i] != '\0')
		if (s[i] != c)
			ch[j][++o] = s[i];
		else if ((s[i + 1] != c) && (s[i + 1] != '\0'))
		{
			ch[j][++o] = '\0';
			j++;
			o = -1;
		}
	ch[++j] = NULL;
	return (ch);
}
