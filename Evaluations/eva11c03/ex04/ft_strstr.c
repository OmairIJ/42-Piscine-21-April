/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:46:31 by fjanke            #+#    #+#             */
/*   Updated: 2021/04/27 19:14:11 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int		len;
	int		x;
	int		y;
	if(!*to_find)
		return (str);
	len = ft_strlen(to_find);
	x = 0;
	y = 0;
	while (str[x])
	{
		if (str[x] == to_find[y])
		{
			y++;
		}
		else
		{
			x = x - y;
			y = 0;
		}
		x++;
		if (y == len)
			return (str + (x - len));
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

#include <string.h>
#include <stdio.h>
int main(){
	char str[10] = "helloom";
	
	printf("%s\n", ft_strstr(str, ""));
	printf("%s\n", strstr(str, ""));
	
}