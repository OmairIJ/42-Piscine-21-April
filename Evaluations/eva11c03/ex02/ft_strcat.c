/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanke <fjanke@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:00:59 by fjanke            #+#    #+#             */
/*   Updated: 2021/04/21 18:28:48 by fjanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int len;
	int x;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	x = 0;
	while (src[x])
	{
		dest[len + x] = src[x];
		x++;
	}
	dest[len + x] = '\0';
	return (dest);
}
