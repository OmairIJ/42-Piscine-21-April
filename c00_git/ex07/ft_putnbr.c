/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:16:14 by oibn-jaf          #+#    #+#             */
/*   Updated: 2021/04/26 20:26:13 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_neg(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	return (nb);
}

int		is_min(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
}

void	ft_putnbr(int nb)
{
	int		len;
	int		temp;
	int		n;
	char	result;

	if (is_min(nb) == 0)
		return ;
	nb = is_neg(nb);
	temp = nb;
	len = 1;
	n = 1;
	while (temp / 10 != 0)
	{
		len++;
		temp = temp / 10;
		n *= 10;
	}
	while (len--)
	{
		result = nb / n;
		result += 48;
		write(1, &result, 1);
		nb %= n;
		n /= 10;
	}
}
int main(){
	ft_putnbr(10);
}