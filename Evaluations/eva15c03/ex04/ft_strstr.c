/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstengl <pstengl@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 07:21:16 by pstengl           #+#    #+#             */
/*   Updated: 2021/04/23 07:36:26 by pstengl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	search_index;
	unsigned int	found;

	while (*str != '\0')
	{
		found = 1;
		search_index = 0;
		while (to_find[search_index] != '\0' && found == 1)
		{
			if (str[search_index] != to_find[search_index])
			{
				found = 0;
			}
			search_index++;
		}
		if (found == 1)
			break ;
		str++;
	}
	if (found == 0)
		return (0);
	return (str);
}
