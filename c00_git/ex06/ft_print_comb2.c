/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 22:41:59 by oibn-jaf          #+#    #+#             */
/*   Updated: 2021/04/20 20:11:17 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	num_char(int num)
{
	char n1;
	char n2;

	n1 = (num / 10) + 48;
	n2 = (num % 10) + 48;
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			num_char(i);
			write(1, " ", 1);
			num_char(j);
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
