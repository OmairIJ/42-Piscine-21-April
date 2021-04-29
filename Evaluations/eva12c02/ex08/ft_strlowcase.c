/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:25:23 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/27 21:18:42 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
#include <stdio.h>
#include <string.h>
int main(){
	char dest[1000] = "HeLo";
	printf("%d\n", ft_strlowcase(dest));
	//printf("%s\n", strncpy(dest, "hello", 3));

}
