/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthien-h <cthien-h@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:56:37 by cthien-h          #+#    #+#             */
/*   Updated: 2021/04/26 21:51:18 by cthien-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		min_index;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		min_index = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[min_index], argv[j]) > 0)
			{
				min_index = j;
			}
			j++;
		}
		tmp = argv[min_index];
		argv[min_index] = argv[i];
		argv[i] = tmp;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		ft_sort_params(argc, argv);
	}
	i = 1;
	while (i < argc)
	{
		ft_putchar(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
