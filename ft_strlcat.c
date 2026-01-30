/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:36:18 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/29 20:19:11 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	int destlen;
	int	srclen;
	
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	while (src[i] && size - 1 > i)
	{
		dst[destlen++] = src[i++];
	}
	dst[destlen] = '\0';
	return (destlen + srclen);
}
