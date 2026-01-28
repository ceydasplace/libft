/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:15:31 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/28 09:24:11 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	s1len;
	int	s2len;
	char	*sum;
	int		i;
	int		slen;

	i = 0;
	slen = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	s1len = strlen(s1);
	s2len = strlen(s2);
	sum = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!sum)
		return (NULL);
	while (s1[slen])
		sum[i++] = s1[slen++];
	slen = 0;
	while (s2[slen])
		sum[i++] = s2[slen++];
	sum[i] = '\0';
	return (sum);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "ceyda";
	char	s2[] = " batu";
	printf("%s", ft_strjoin(s1,s2));
}