/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:40:38 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 13:02:54 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	a[2];

	ft_memset(&a[0], 0, 4);
	ft_memset(&a[0], 16, 2);
	ft_memset(&a[0], 146, 1);
	ft_memset(&a[1], 0, 4);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
}
