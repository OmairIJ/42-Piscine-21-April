/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:54:32 by oibn-jaf          #+#    #+#             */
/*   Updated: 2021/04/28 13:55:56 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low(char c)
{
	if (c < 'a' || 'z' < c)
		return (0);
	return (1);
}

int		is_alnum(char c)
{
	if (('A' <= c && c <= 'Z')
	|| ('a' <= c && c <= 'z')
	|| ('0' <= c && c <= '9'))
	{
		return (1);
	}
	return (0);
}

int		is_cap(char c)
{
	if (c < 'A' || 'Z' < c)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char *c;

	c = str;
	while (*c)
	{
		if ((is_low(*c) && c == str)
		|| (c > str && !is_alnum(*(c - 1)) && is_low(*c)))
			*c -= 32;
		else if (c > str && is_alnum(*(c - 1)) && is_cap(*c))
			*c += 32;
		c++;
	}
	return (str);
}
