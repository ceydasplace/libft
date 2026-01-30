/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:42:21 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/30 08:18:48 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_str_len(long x)
{
	int	size;

	size = 1;
	if (x < 0)
		size++;
	while (x > 9 || x < -9)
	{
		x = x / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		number;
	long	len;

	len = (long)n;
	number = get_str_len(len);
	str = malloc(sizeof(char) * (number + 1));
	if (!str)
		return (NULL);
	str[number] = '\0';
	if (len < 0)
	{
		str[0] = '-';
		len = -len;
	}
	number--;
	while (len > 9)
	{
		str[number] = (len % 10) + '0';
		len = len / 10;
		number--;
	}
	str[number] = len + '0';
	return (str);
}
