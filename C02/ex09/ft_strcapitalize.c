/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:37:12 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/18 21:52:50 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	my_alnum(char c)
{
	if (('0' <= c && c <= '9') ||
				('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap_next;

	cap_next = 1;
	i = 0;
	while (str[i])
	{
		if (cap_next)
		{
			if ('a' <= str[i] && str[i] <= 'z')
				{
					str[i] = str[i] ^ ' ';
					cap_next = 0;
				}
			else if ('0' <= str[i] && str[i] <= '9')
				cap_next = 0;
			else if ('A' <= str[i]) && (str[i] <= 'Z')
				cap_next = 0;
		}
		else if ((!cap_next) && ('A' <= str[i]) && (str[i] <= 'Z'))
			str[i] = str[i] ^ ' ';
		else if (!my_alnum(str[i]))
			cap_next = 1;
		i++;
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
	char	*ft_strcapitalize(char *str);
	char str[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	char	*ptr;
	ptr = str;
	ft_strcapitalize(ptr);
	print_str(ptr);
	return (0);
}

*/