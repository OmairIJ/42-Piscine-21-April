/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffranzen <ffranzen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 04:52:52 by ffranzen          #+#    #+#             */
/*   Updated: 2021/04/19 09:43:09 by ffranzen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(48 + a / 10);
			ft_putchar(48 + a % 10);
			ft_putchar(32);
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			if (a < 98)
			{
				ft_putchar(44);
				ft_putchar(32);
			}
			b++;
		}
		a++;
	}
}
