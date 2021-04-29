/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:39:10 by jruto             #+#    #+#             */
/*   Updated: 2021/04/28 23:10:06 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
		{
			break ;
		}
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

#include <string.h>
#include <stdio.h>
int	main(void){
	printf("%d\n", ft_strncmp("hello", "heo", 3));
	printf("%d\n", strncmp("hello", "heo", 3));

}
