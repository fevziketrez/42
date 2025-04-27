/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 04:03:48 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/16 22:39:22 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(int number)
{
	write (1, &number, 1);
}

void	ft_print_digits(int number)
{
	int	i;
	int	j;

	i = (number / 10) % 10;
	j = number % 10;
	ft_printchar(i + '0');
	ft_printchar(j + '0');
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_print_digits(first);
			write(1, " ", 1);
			ft_print_digits(second);
			if (!(first == 98 && second == 99))
				write(1, ", ", 2);
			second = second + 1;
		}
		first = first + 1;
	}
}
