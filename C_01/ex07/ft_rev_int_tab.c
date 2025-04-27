/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:16:23 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/18 19:57:35 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*temp;
	int	i;

	i = 0;
	while (tab[i])
	{
		temp[i] = tab[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (temp[i])
	{
		tab[i] = temp[size - i - 1];
		i++;
	}
}
