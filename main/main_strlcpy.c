/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:32:31 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 17:45:46 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	dst[] = "ceyda";
	char	src[] = "batus";
	size_t i = 5;
	printf("%zu", ft_strlcpy(dst, src, i));
	printf("\n%s", dst);
}