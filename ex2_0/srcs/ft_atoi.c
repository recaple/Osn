/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 17:40:25 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/05 19:26:42 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int long n;
	int long s;

	i = 0;
	n = 0;
	s = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	if (str[i] == '+')
	{
		if (s == -1)
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		if (s == -1)
		{
		if ((unsigned long int)(n * 10) == 9223372036854775807U)
			return (0);
		else if ((unsigned long int)(n * 10) > 9223372036854775807U)
			return (0);
		else
			n = n * 10 + (str[i++] & 0x0F);
		}
		else
		{
		 if ((unsigned long int)(n * 10 * s) == 9223372036854775807U)
                        return (0);
                else if ((unsigned long int)(n * 10) > 9223372036854775807U)
                        return (-1);
                else
                        n = n * 10 + (str[i++] & 0x0F);
		}
	return (n * s);
}
