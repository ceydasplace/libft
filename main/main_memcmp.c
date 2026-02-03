/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:42:15 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 15:56:00 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main(void)
{
	char s1[] = "batus";
	char s2[] = "batuhan";
	size_t i;
	i = 7;
	printf("%d", ft_memcmp(s1,s2,i));
}