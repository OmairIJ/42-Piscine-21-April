/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 08:37:44 by pstengl           #+#    #+#             */
/*   Updated: 2021/04/26 17:52:47 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	index_src;

	length_dest = 0;
	while (dest[length_dest] != '\0' && length_dest < size)
		length_dest++;
	size = size - length_dest;
	if (size == 0)
		return (length_dest);
	index_src = 0;
	while (src[index_src] != '\0' && index_src < size - 1)
	{
		dest[length_dest + index_src] = src[index_src];
		index_src++;
	}
	while (index_src < size)
	{
		dest[length_dest + index_src] = '\0';
		index_src++;
	}
	return (index_src + length_dest);
}
