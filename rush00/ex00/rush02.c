/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:03:40 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/13 17:44:02 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	c = 0;
	r = 0;
	while ((y > 0 && x > 0) && r < y)
	{
		while (c < x)
		{
			if ((c == 0 && r == 0) || (c + 1 == x && r == 0))
				ft_putchar('A');
			else if ((c + 1 == x && r + 1 == y) || (c == 0 && r + 1 == y))
				ft_putchar('C');
			else if (r + 1 == y || r == 0)
				ft_putchar('B');
			else if (c + 1 == x || c == 0)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
		c = 0;
	}
}
