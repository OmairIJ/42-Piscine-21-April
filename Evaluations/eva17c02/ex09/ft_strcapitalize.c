/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/28 09:25:01 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** A-> Z (65 -> 90)
** a -> z (97 -> 122)
*/

int		ft_upercase(char c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}

int		ft_lowercase(char c)
{
	if ((c > 96) && (c < 123))
		return (1);
	return (0);
}

int		ft_number(char c)
{
	if (c > 47 && (c < 58))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	ct;
	int new;

	ct = 0;
	new = 1;
	while (*(str + ct) != '\0')
	{
		if ((ft_lowercase(*(str + ct)) == 1) || (ft_upercase(*(str + ct)) == 1))
		{
			if ((new == 0) && (ft_upercase(*(str + ct)) == 1))
				str[ct] = str[ct] + 32;
			else if ((new == 1) && ft_lowercase(*(str + ct)) == 1)
				str[ct] = str[ct] - 32;
			new = 0;
		}
		else if ((ft_number(*(str + ct)) == 1))
		{
			new = 0;
		}
		else
			new = 1;
		ct++;
	}
	return (str);
}
