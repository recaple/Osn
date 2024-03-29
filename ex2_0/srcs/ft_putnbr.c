/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:45:47 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/19 17:11:03 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		abs(int a);
void	ft_putnbr(int nb);

int		abs(int a)
{
	if (a < 0)
		a = 0 - a;
	return (a);
}

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (abs(n / 1000000000) != 0)
		ft_putchar('0' + abs(n / 1000000000));
	if (abs(n % 1000000000) / 100000000 != 0 || (abs(n / 1000000000) != 0))
		ft_putchar('0' + (abs(n % 1000000000) / 100000000));
	if (abs(n % 100000000) / 10000000 != 0 || (abs(n / 100000000) != 0))
		ft_putchar('0' + (abs(n % 100000000) / 10000000));
	if (abs(n % 10000000) / 1000000 != 0 || (abs(n / 10000000) != 0))
		ft_putchar('0' + (abs(n % 10000000) / 1000000));
	if (abs(n % 1000000) / 100000 != 0 || (abs(n / 1000000) != 0))
		ft_putchar('0' + (abs(n % 1000000) / 100000));
	if (abs(n % 100000) / 10000 != 0 || (abs(n / 100000) != 0))
		ft_putchar('0' + (abs(n % 100000) / 10000));
	if (abs(n % 10000) / 1000 != 0 || (abs(n / 10000) != 0))
		ft_putchar('0' + (abs(n % 10000) / 1000));
	if (abs(n % 1000) / 100 != 0 || (abs(n / 1000) != 0))
		ft_putchar('0' + (abs(n % 1000) / 100));
	if (abs(n % 100) / 10 != 0 || (abs(n / 100) != 0))
		ft_putchar('0' + (abs(n % 100) / 10));
	ft_putchar('0' + abs(n % 10));
}
