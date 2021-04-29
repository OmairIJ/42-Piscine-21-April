/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/21 15:44:03 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** 0-> 9 (48 -> 57)
*/

void	ft_test_numeric(int c, int *ptra)
{
	if (c < 48 || c > 57)
	{
		*ptra = 0;
	}
	return ;
}

int		ft_str_is_numeric(char *str)
{
	int	ct;
	int alpha;
	int *ptr;

	alpha = 1;
	ptr = &alpha;
	ct = 0;
	while (*(str + ct) != '\0' && alpha == 1)
	{
		ft_test_numeric(*(str + ct), ptr);
		ct++;
	}
	return (alpha);
}
