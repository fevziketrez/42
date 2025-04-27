/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:06:25 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/18 19:17:20 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char hex_arr[16] = "0123456789abcdef";

	while (*str)
	{
		if (6 < *str && *str < 16)
		{
			ft_putchar('\\');
			ft_putchar(hex_arr[(*str/16)]);
			ft_putchar(hex_arr[(*str % 16)]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
