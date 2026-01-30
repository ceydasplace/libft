/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:21:59 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/30 10:23:22 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*a;
	char	*dup;

	size = ft_strlen(s1);
	dup = (char *)malloc(size * sizeof(char) + 1);
	if (!dup)
		return (0);
	a = dup;
	while (*s1)
	{
		*a = *s1;
		a++;
		s1++;
	}
	*a = '\0';
	return (dup);
}
