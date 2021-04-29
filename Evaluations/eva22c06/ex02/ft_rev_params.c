/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthien-h <cthien-h@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:54:14 by cthien-h          #+#    #+#             */
/*   Updated: 2021/04/26 20:55:19 by cthien-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (argc > 1)
		{
			ft_putstr(argv[argc - 1]);
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
