/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:36:18 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/06 10:50:54 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	src_len;
	int	dst_len;
	int	i;

	i = 0;
	dst_len = 8;
	src_len = 5;
	while (dst[i] && i < size)
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
}

int	main(void)
{
	char	src[] = "selam";
	char	dst[] = "merhaba ";
	size_t size = 12;
	printf("%zu", ft_strlcat(src,dst,size));
	printf("\n%s", dst);
}
