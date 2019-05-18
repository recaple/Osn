/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:12:04 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/05/06 16:16:38 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check(int long *s, char *str)
{
	int i;

	i = 0;
	*s = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		*s = -1;
		i++;
	}
	if (str[i] == '+')
	{
		if (*s == -1)
			return (0);
		i++;
	}
	return (i);
}

int			ft_atoi(char *str)
{
	int			i;
	int long	n;
	int long	s;

	i = check(&s, str);
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((s == -1) && ((unsigned long int)(n * 10) >= 9223372036854775807U))
			return (0);
		else if ((unsigned long int)(n * 10) >= 9223372036854775807U)
			return (-1);
		n = n * 10 + (str[i++] & 0x0F);
	}
	return (n * s);
}
