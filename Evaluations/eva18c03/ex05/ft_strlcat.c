/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruto <jruto@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:18:47 by jruto             #+#    #+#             */
/*   Updated: 2021/04/28 20:41:37 by jruto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int	destlen;
	unsigned	int	sourcelen;
	unsigned	int	offset;
	unsigned	int	sourceindex;

	destlen = ft_strlen(dest);
	sourcelen = ft_strlen(src);
	offset = destlen;
	sourceindex = 0;
	while (*(src + sourceindex) != '\0')
	{
		*(dest + offset) = *(src + sourceindex);
		offset++;
		sourceindex++;
		if (offset == size - 1)
		{
			break ;
		}
	}
	*(dest + offset) = '\0';
	return (destlen + sourcelen);
}
