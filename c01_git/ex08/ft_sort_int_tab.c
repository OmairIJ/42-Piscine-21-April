/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 08:10:56 by oibn-jaf          #+#    #+#             */
/*   Updated: 2021/04/28 08:11:09 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int j;
	int t;

	i = 0;
	j = i + 1;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
			{
				t = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = t;
			}
			j++;
		}
		i++;
	}
}
