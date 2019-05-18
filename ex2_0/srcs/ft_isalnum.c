/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:48:55 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/13 14:48:57 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int character);
int ft_isdigit(int character);

int	ft_isalnum(int character)
{
	if (ft_isalpha(character) || ft_isdigit(character))
		return (8);
	return (0);
}
