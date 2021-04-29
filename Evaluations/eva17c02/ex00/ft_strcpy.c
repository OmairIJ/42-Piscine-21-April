/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/21 20:39:32 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Put a '\n' at the end
*/

char	*ft_strcpy(char *dest, char *src)
{
	int ct;

	ct = 0;
	while (src[ct] != '\0')
	{
		dest[ct] = src[ct];
		ct++;
	}
	dest[ct] = '\0';
	return (dest);
}
