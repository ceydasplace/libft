/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:15:57 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/30 12:02:58 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		a = 0;
		while (haystack[i + a] == needle[a] && (i + a) < len
			&& needle[a] != '\0')
		{
			if (needle[a + 1] == '\0')
				return ((char *)haystack + i);
			a++;
		}
		i++;
	}
	return (NULL);
}
