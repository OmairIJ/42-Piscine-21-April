/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 08:15:10 by pstengl           #+#    #+#             */
/*   Updated: 2021/04/26 15:23:06 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				difference;
	unsigned int	index;

	if (n == 0)
		return (0);
	difference = 0;
	index = 0;
	while (*s1 == *s2 && index < n)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break ;
		s1++;
		s2++;
		index++;
	}
	difference = *s1 - *s2;
	return (difference);
}
