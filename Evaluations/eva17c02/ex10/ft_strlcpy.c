/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flormich <flormich@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 09:36:31 by flormich          #+#    #+#             */
/*   Updated: 2021/04/28 09:39:43 by flormich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int					ft_strlen(char *str)
{
	int				ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		ct = ct + 1;
	}
	return (ct);
}

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ct;
	int				len;

	len = ft_strlen(src);
	if (size != 0)
	{
		len = ft_strlen(src);
		ct = 0;
		while (src[ct] != '\0' && ct < size - 1)
		{
			dest[ct] = src[ct];
			ct = ct + 1;
		}
		dest[ct] = '\0';
		return (len);
	}
	return (len);
}
