/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulati <kgulati@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:46:34 by kgulati           #+#    #+#             */
/*   Updated: 2021/04/18 17:03:53 by kgulati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				j;
	unsigned int	size_src;
	unsigned int	size_dest;
	int				append_size;

	i = 0;
	j = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	append_size = size - size_dest - 1;
	while (src[j] != '\0' && j < (append_size))
	{
		dest[size_dest + j] = src[j];
		j++;
	}
	dest[size_dest + j] = '\0';
	return (size_dest + size_src);
}
