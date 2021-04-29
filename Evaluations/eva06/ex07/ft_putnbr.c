/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emomkus <emomkus@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 23:26:49 by emomkus           #+#    #+#             */
/*   Updated: 2021/04/19 12:00:57 by emomkus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		counterpow(int g)
{
	int	f;
	int l;

	f = 0;
	l = 1;
	while (g > 0)
	{
		g = g / 10;
		f++;
	}
	while (f > 0)
	{
		l = l * 10;
		f--;
	}
	return (l);
}

int		checks_zeros(int v)
{
	int		k;
	int		ee;

	k = 0;
	ee = 0;
	while ((v % 10 == 0 && ee == 0))
	{
		if (!(v % 10 == 0))
		{
			ee++;
		}
		v = v / 10;
		k++;
	}
	return (k);
}

void	redute(int pp)
{
	int		s;
	char	j;

	s = 0;
	while (pp > 0)
	{
		s = s + (pp % 10) * counterpow(pp);
		pp = pp / 10;
	}
	while (s > 9)
	{
		s = s / 10;
		j = s % 10 + '0';
		write(1, &j, 1);
	}
}

void	ft_putnbr(int nb)
{
	int		p;

	p = checks_zeros(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	redute(nb);
	while (p-- > 0)
	{
		write(1, "0", 1);
	}
}
