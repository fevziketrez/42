/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 04:34:04 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/23 15:25:31 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int temp)
{
	if (temp == -2147483648)
		write (1, "-2147483648", 11);
	else if (temp < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-temp);
	}
	else if (temp > 9)
	{
		ft_putnbr(temp / 10);
		ft_putchar(temp % 10 + '0');
	}
	else
		ft_putchar(temp % 10 + '0');
}
