/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/26 09:45:43 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Not printable: 0 -> 31, (32=space), 127=DEL
*/

void	ft_test(int c, int *ptra)
{
	if (c < 32 || c == 127)
	{
		*ptra = 0;
	}
	return ;
}

int		ft_str_is_printable(char *str)
{
	int	ct;
	int alpha;
	int *ptr;

	alpha = 1;
	ptr = &alpha;
	ct = 0;
	while (*(str + ct) != '\0' && alpha == 1)
	{
		ft_test(*(str + ct), ptr);
		ct++;
	}
	return (alpha);
}
