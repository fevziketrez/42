/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:42:02 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/28 17:05:27 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	num_found;
	int	num;

	num = 0;
	sign = 1;
	num_found = 0;
	while (*str && *str == ' ')
		str++;
	while (*str)
	{
		if (*str == '+' && !num_found)
			str++;
		else if (*str == '-' && !num_found)
			sign *= -1;
		else if ('0' <= *str && *str <= '9')
		{
			num = num * 10 + *str;
			num_found = 1;
		}
		else
			return (sign * num);
	}
	return (sign * num);
}
