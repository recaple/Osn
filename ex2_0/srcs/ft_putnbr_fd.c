/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:42:58 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/19 17:42:59 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);
int		abs(int a);

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (abs(n / 1000000000) != 0)
		ft_putchar_fd('0' + abs(n / 1000000000), fd);
	if (abs(n % 1000000000) / 100000000 != 0 || (abs(n / 1000000000) != 0))
		ft_putchar_fd('0' + (abs(n % 1000000000) / 100000000), fd);
	if (abs(n % 100000000) / 10000000 != 0 || (abs(n / 100000000) != 0))
		ft_putchar_fd('0' + (abs(n % 100000000) / 10000000), fd);
	if (abs(n % 10000000) / 1000000 != 0 || (abs(n / 10000000) != 0))
		ft_putchar_fd('0' + (abs(n % 10000000) / 1000000), fd);
	if (abs(n % 1000000) / 100000 != 0 || (abs(n / 1000000) != 0))
		ft_putchar_fd('0' + (abs(n % 1000000) / 100000), fd);
	if (abs(n % 100000) / 10000 != 0 || (abs(n / 100000) != 0))
		ft_putchar_fd('0' + (abs(n % 100000) / 10000), fd);
	if (abs(n % 10000) / 1000 != 0 || (abs(n / 10000) != 0))
		ft_putchar_fd('0' + (abs(n % 10000) / 1000), fd);
	if (abs(n % 1000) / 100 != 0 || (abs(n / 1000) != 0))
		ft_putchar_fd('0' + (abs(n % 1000) / 100), fd);
	if (abs(n % 100) / 10 != 0 || (abs(n / 100) != 0))
		ft_putchar_fd('0' + (abs(n % 100) / 10), fd);
	ft_putchar_fd('0' + abs(n % 10), fd);
}
