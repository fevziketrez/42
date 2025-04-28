/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 06:57:47 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/23 15:35:42 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str);
}
/*

#include <unistd.h>

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	*ft_strupcase(char *str);
	char	str[]= {"-*021sd"};

	ft_strupcase(str);
	print_str(str);
	return (0);
}

*/
