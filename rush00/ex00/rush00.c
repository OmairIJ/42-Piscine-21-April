/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:07:38 by mwen              #+#    #+#             */
/*   Updated: 2021/04/19 10:08:13 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	line(int x, char w, char r, char t);

void	rush(int x, int y)
{
	int j;

	j = 1;
	while (j <= y)
	{
		if (j == 1 || j == y)
		{
			line(x, 'o', '-', 'o');
		}
		else
		{
			line(x, '|', ' ', '|');
		}
		j++;
	}
}

void	line(int x, char w, char r, char t)
{
	int q;

	q = x;
	ft_putchar(w);
	q--;
	while (q > 1)
	{
		ft_putchar(r);
		q--;
	}
	ft_putchar(t);
	ft_putchar('\n');
}
