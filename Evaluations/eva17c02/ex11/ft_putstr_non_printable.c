/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/28 06:06:40 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_tr_w_dec_hexa(int nb)
{
	int		d;
	int		u;
	char	*hexa;

	hexa = "0123456789abcdef";
	d = nb / 16;
	u = nb % 16;
	write(1, &(hexa[d]), 1);
	write(1, &(hexa[u]), 1);
}

void		ft_putstr_non_printable(char *str)
{
	unsigned char	*asci;
	int				ct;
	int				slash;

	asci = (unsigned char *)str;
	slash = 92;
	ct = 0;
	while (*(asci + ct) != '\0')
	{
		if (*(asci + ct) < 32 || *(asci + ct) > 126)
		{
			write(1, &slash, 1);
			ft_tr_w_dec_hexa(*(asci + ct));
			ct++;
		}
		write(1, asci + ct, 1);
		ct = ct + 1;
	}
}
