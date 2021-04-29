/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibn-jaf <oibn-jaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:59:09 by kchaniot          #+#    #+#             */
/*   Updated: 2021/04/19 16:44:23 by oibn-jaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fix_nums(int *nums, int index, int n)
{
	while (index < n - 1)
	{
		nums[index + 1] = nums[index] + 1;
		index++;
	}
}

void	ft_print_nums(int *nums, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		write(1, &nums[i], 1);
		i++;
	}
}

int		ft_index_limit(int *nums, int index, int n)
{
	if (nums[index] == (58 - n + index))
		return (1);
	else
		return (0);
}

void	ft_print_combn(int n)
{
	int nums[n];
	int index;

	nums[0] = 48;
	index = n - 1;
	ft_fix_nums(nums, 0, n);
	ft_print_nums(nums, n);
	while (nums[0] != (59 - n + index))
	{
		if (ft_index_limit(nums, index, n) == 1)
			index--;
		else
		{
			nums[index] = nums[index] + 1;
			ft_fix_nums(nums, index, n);
			write(1, ", ", 2);
			ft_print_nums(nums, n);
			index = n - 1;
		}
	}
}
