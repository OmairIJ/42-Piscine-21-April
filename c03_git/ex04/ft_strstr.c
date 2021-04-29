/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 12:18:12 by oibn-jaf          #+#    #+#             */
/*   Updated: 2021/04/28 20:21:04 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*p;

	if (!to_find[0])
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			p = &str[i];
			break ;
		}
		i++;
	}
	while (to_find[j])
	{
		if ((to_find[j] && str[i]) && str[i] != to_find[j])
			return (0);
		i++;
		j++;
	}
	return (p);
}
