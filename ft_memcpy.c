/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:53:24 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/30 08:59:20 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destination;

	i = 0;
	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
