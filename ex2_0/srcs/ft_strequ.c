/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 21:31:22 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/18 21:31:23 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(const char *s1, const char *s2);

int	ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
