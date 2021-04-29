/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 05:16:46 by ffranzen          #+#    #+#             */
/*   Updated: 2021/04/19 17:02:24 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 2);
}

void	ft_putnbr(int nb)
{
	int i;
	int dec;

	dec = 10;
	if (nb < 0)
	{
		ft_putchar(45);
		nb = -nb;
	}
	i = 0;
	while (nb / dec != 0)
	{
		dec = dec * 10;
		i++;
	}
	if (nb / dec / 10 > 0)
		ft_putchar(48 + (nb / dec / 10));
	dec = dec / 10;
	while (i >= 0)
	{
		ft_putchar(48 + (nb / dec % 10));
		dec = dec / 10;
		i--;
	}
}
