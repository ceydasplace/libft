/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:52:33 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 14:17:59 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char s[50] = "ceyda selamlar";
	size_t n = 5;
	printf("%s\n", s);
	ft_bzero(s, n);
	printf("\n%s", &s[6]);
}