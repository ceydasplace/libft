/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:14:41 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/30 08:47:14 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (c >= 256)
		c = c % 256;
	while (n--)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
