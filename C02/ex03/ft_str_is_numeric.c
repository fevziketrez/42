/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 05:34:50 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/23 15:34:51 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <unistd.h>

int	main(void)
{
	int	ft_str_is_numeric(char *str);
	int	i;

	i = '0' + ft_str_is_numeric("*3");
	write(1, &i, 1);
	return (0);
}
*/