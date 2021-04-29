/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:26:24 by oibn-jaf          #+#    #+#             */
/*   Updated: 2021/04/29 12:27:11 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	char	*p;
	int		sign;
	int		num;

	num = 0;
	sign = 1;
	p = str;
	while (*p)
	{
		if (*p == '-')
			sign *= -1;
		p++;
	}
	p = str;
	while (*p)
	{
		if (*p > '0' && *p < '9')
		{
			num = num * 10 + (*p - 48);
			if (p[1] < '0' || p[1] > '9')
				return (num * sign);
		}
		p++;
	}
	return (num * sign);
}
