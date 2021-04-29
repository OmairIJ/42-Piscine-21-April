/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:43:59 by fjanke            #+#    #+#             */
/*   Updated: 2021/04/27 19:08:17 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	x;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	x = 0;
	while (x < nb && src[x])
	{
		dest[len + x] = src[x];
		x++;
	}
	dest[len + x] = '\0';
	return (dest);
}

