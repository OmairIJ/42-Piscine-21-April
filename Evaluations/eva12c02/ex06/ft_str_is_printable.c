/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:25:23 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/27 21:13:18 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || '~' < str[i])
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
#include <string.h>
int main(){
	char dest[100];
	dest[0] = 127;
	printf("%d\n", ft_str_is_printable(dest));
	//printf("%s\n", strncpy(dest, "hello", 3));

}