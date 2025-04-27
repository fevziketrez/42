/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:18:19 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/18 19:48:24 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	printhex(unsigned int num)
{
	char	*hex_addr[16];
	*hex_addr = "1234567890abcdef";

	write(1, hex_addr[num] - '0', 1);
}

void	rec_conv_hex_16(unsigned int num)
{
	int	i;

	while (i < 16)
	{
		if (num > 16)
			rec_conv_hex_16(num / 16);
		else
			printhex(num % 16);
		i++;
	}
}

void	convert_hex_2(unsigned int num)
{
	printhex(num / 16);
	printhex(num % 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	rec_conv_hex_16(*addr);
	write(1, ":", 1);
}
