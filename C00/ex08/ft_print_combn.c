/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 03:56:01 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/17 13:27:46 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive_next_num(int start_num, int index, int digits, char *arr)
{
	int	i;

	i = start_num;
	while (i < 10)
	{
		arr[index] = i + '0';
		if (digits - index == 1)
		{
			write(1, arr, index + 1);
			if ((arr[0] != 9 - index + '0'))
				write(1, ", ", 2);
		}
		ft_recursive_next_num(i + 1, index + 1, digits, arr);
		i++;
	}
}

void	ft_print_combn(int digits)
{
	char	arr[11];

	ft_recursive_next_num(0, 0, digits, arr);
}
