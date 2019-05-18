/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:52:30 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/13 13:52:32 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1024);
	return (0);
}
