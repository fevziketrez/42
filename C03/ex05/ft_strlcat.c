/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:52:33 by fketrez           #+#    #+#             */
/*   Updated: 2025/04/28 19:14:10 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dst;
	unsigned int	len_src;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (dest[len_dst])
		len_dst++;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_src);
	while (i + len_dst < size - 1 && src[i])
	{
		dest[len_dst + i] = src[i];
		i++;
	}
	dest[len_dst + i] = '\0';
	return (len_dst+len_src);
}
