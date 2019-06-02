/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 12:25:05 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/02/02 12:11:11 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int ret;

	ret = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		ret = ret * nb;
		nb--;
	}
	return (ret);
}
