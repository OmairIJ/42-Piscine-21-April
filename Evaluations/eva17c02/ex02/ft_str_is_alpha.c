/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/21 15:44:16 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** A-> Z (65 -> 90)
** a -> z (97 -> 122)
*/

void	ft_test_alpha(char c, int *ptra)
{
	if (c < 65 || c > 122 || (c > 90 && c < 97))
	{
		*ptra = 0;
	}
	return ;
}

int		ft_str_is_alpha(char *str)
{
	int	ct;
	int alpha;
	int *ptr;

	alpha = 1;
	ptr = &alpha;
	ct = 0;
	while (*(str + ct) != '\0' && alpha == 1)
	{
		ft_test_alpha(*(str + ct), ptr);
		ct++;
	}
	return (alpha);
}
