/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 02:40:34 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/16 22:35:51 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = 48;
	while (first < 56)
	{
		second = first + 1;
		while (second < 57)
		{
			third = second + 1;
			while (third < 58)
			{
				write (1, &first, 1);
				write (1, &second, 1);
				write (1, &third, 1);
				if (first == '7' && second == '8' && third == '9')
					break ;
				write (1, ", ", 2);
				third = third + 1;
			}
			second = second + 1;
		}
		first = first + 1;
	}
}
