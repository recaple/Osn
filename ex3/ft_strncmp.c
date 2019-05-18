/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:23:44 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/05 19:17:19 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n <= 0)
		return (0);
	while (!(i = (*(unsigned char*)(s1) -
		*(unsigned char*)(s2))) && *(unsigned char*)s2 && --n)
	{
		s1++;
		s2++;
	}
	return (i);
}
