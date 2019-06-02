/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:23:44 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/04 21:26:16 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	while ((const unsigned char)*s1 && ((const unsigned char)*s1
		== (const unsigned char)*s2))
	{
		s1++;
		s2++;
	}
	return ((const unsigned char)*s1 - (const unsigned char)*s2);
}
