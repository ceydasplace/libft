/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:15:31 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 19:50:05 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	char	*sum;
	int		i;
	int		strindex;

	i = 0;
	strindex = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	sum = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!sum)
		return (NULL);
	while (s1[strindex])
		sum[i++] = s1[strindex++];
	strindex = 0;
	while (s2[strindex])
		sum[i++] = s2[strindex++];
	sum[i] = '\0';
	return (sum);
}
