/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustavo <agustavo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 10:28:04 by agustavo          #+#    #+#             */
/*   Updated: 2021/04/29 12:32:59 by agustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	unsigned int i;

	i = 0;
	if (!str)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] <= 127)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
