/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 08:15:10 by pstengl           #+#    #+#             */
/*   Updated: 2021/04/22 08:32:01 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int difference;

	difference = 0;
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break ;
		s1++;
		s2++;
	}
	difference = *s1 - *s2;
	return (difference);
}
