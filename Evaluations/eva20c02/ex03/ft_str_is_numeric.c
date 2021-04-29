/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustavo <agustavo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:16:06 by agustavo          #+#    #+#             */
/*   Updated: 2021/04/29 12:26:56 by agustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	unsigned int i;

	i = 0;
	if (!str)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
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
