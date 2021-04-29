/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffranzen <ffranzen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 07:52:35 by ffranzen          #+#    #+#             */
/*   Updated: 2021/04/19 12:54:44 by ffranzen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = a + 2;
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_putchar(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
