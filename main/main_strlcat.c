/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:15:48 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 17:26:14 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char dst[20] = "ceydos";
	char src[] = " batusum";
	printf("%zu", ft_strlcat(dst, src, 15));
	printf("\n%s", dst);
}