/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 06:12:43 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/17 06:18:11 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!('A' <= *str && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*

#include <unistd.h>

int	main(void)
{
	int	ft_str_is_uppercase(char *str);
	int	i;

	i = '0' + ft_str_is_uppercase("DS*J");
	write(1, &i, 1);
	return (0);
}

*/