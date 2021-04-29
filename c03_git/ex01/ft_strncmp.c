/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:39:45 by oibn-jaf          #+#    #+#             */
/*   Updated: 2021/04/29 12:06:44 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && s1[i] == s2[i] && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void){
	printf("%d\n", ft_strcmp("hello", "helln"));
	printf("%d\n", strcmp("hello", "helln"))
}
