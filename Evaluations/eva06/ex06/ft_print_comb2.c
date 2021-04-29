/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emomkus <emomkus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:02:28 by emomkus           #+#    #+#             */
/*   Updated: 2021/04/19 12:04:46 by emomkus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	integer_to_char(int x, int z)
{
	char	a;
	char	b;

	a = x / 10 + '0';
	b = x % 10 + '0';
	if (z == 1)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

void	ft_print_comb2(void)
{
	int u;
	int y;

	u = -1;
	while (u++ < 99)
	{
		y = u;
		while (y++ < 99)
		{
			ft_putchar(integer_to_char(u, 1));
			ft_putchar(integer_to_char(u, 2));
			write(1, " ", 1);
			ft_putchar(integer_to_char(y, 1));
			ft_putchar(integer_to_char(y, 2));
			if (!(u == 98 && y == 99))
			{
				write(1, ", ", 2);
			}
		}
	}
}
