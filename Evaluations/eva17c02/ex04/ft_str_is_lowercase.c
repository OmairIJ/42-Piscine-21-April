/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/21 15:51:22 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** a -> b (97 -> 122)
*/

void	ft_test(int c, int *ptra)
{
	if (c < 97 || c > 122)
	{
		*ptra = 0;
	}
	return ;
}

int		ft_str_is_lowercase(char *str)
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
