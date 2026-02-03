/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:57:24 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 18:00:41 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	s1[] = "ceydosko";
	char	s2[] = "ceydosum";
	size_t	n = 7;
	printf("%d", ft_strncmp(s1, s2, n));
}