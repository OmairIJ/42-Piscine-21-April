/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:19:22 by fjanke            #+#    #+#             */
/*   Updated: 2021/04/27 19:17:01 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	int				x;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	x = 0;
	while (src[x] != '\0')
	{
		dest[x + dlen] = src[x];
		x++;
		if (dlen + x == size - 1)
			break ;
	}
	dest[dlen + x] = '\0';
	return (dlen + slen);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	x;

	x = 0;
	while (*str)
	{
		x++;
		str++;
	}
	return (x);
}

#include <string.h>
#include <stdio.h>
int main(){
	char str[10] = "";
	
	printf("%d\n", ft_strlcat(str, "", 1));
	//printf("%d\n", strcat(str, ""));
	
}