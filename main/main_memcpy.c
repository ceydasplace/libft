/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:58:16 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 16:11:33 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
int	main(void)
{
	char	dst[] = "selamlar";
	char	src[] = "merhaba";
	char	*son;
	son = ft_memcpy(dst, src, 12);
	printf("%s", son);
}
*/

int	main(void)
{
	char	dst[] = "selamlar";
	char	*son;
	son = ft_memcpy(dst+3, dst, 10);
	printf("%s/n", son);
}
