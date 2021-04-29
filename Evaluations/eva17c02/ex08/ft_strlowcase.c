/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/27 10:24:19 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** A-> Z (65 -> 90)
** a -> z (97 -> 122)
*/

char	*ft_strlowcase(char *str)
{
	int	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		if (str[ct] >= 65 && str[ct] <= 90)
		{
			str[ct] = str[ct] + 32;
		}
		ct++;
	}
	return (str);
}
