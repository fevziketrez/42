/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 05:16:25 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/23 15:34:12 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{

	while (*str)
	{
		if (!(('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <unistd.h>

int	main(void)
{
	int	ft_str_is_alpha(char *str);
	char	i;

	i = '0' + ft_str_is_alpha("aADASXSxsDASX");
	write(1, &i, 1);
	return (0);
}

*/
