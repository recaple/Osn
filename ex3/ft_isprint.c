/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:03:22 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/13 15:03:24 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int ch)
{
	if (ch >= 0x20 && ch <= 0x7E)
		return (1);
	return (0);
}
