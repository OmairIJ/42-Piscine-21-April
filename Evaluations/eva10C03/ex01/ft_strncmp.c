/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerhard <cgerhard@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:41:05 by cgerhard          #+#    #+#             */
/*   Updated: 2021/04/26 13:30:06 by cgerhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (((s1[i]) || (s2[i])) && (s1[i] == s2[i]) && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
