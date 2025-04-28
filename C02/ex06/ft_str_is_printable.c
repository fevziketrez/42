/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 06:18:46 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/23 15:35:03 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{

	while (*str)
	{
		if (!(32 <= *str && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*

#include <unistd.h>

int	main(void)
{
	int	ft_str_is_printable(char *str);
	int	i;

	i = '0' + ft_str_is_printable("sdknklcn2j*?.=4)^+2");
	write(1, &i, 1);
	return (0);
}

*/
