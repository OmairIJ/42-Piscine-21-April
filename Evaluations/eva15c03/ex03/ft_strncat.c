/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 08:37:44 by pstengl           #+#    #+#             */
/*   Updated: 2021/04/22 08:57:12 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length_dest;
	unsigned int	index_src;

	length_dest = 0;
	while (dest[length_dest] != '\0')
		length_dest++;
	index_src = 0;
	while (src[index_src] != '\0' && index_src < nb)
	{
		dest[length_dest + index_src] = src[index_src];
		index_src++;
	}
	dest[length_dest + index_src] = '\0';
	return (dest);
}
