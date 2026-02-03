/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:06:24 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 18:13:40 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	haystack[] = "merhabaselam bugün ababama";
	char	needle[] = "haba";
	size_t	len = 10;
	printf("%s", ft_strnstr(haystack, needle, len));
}