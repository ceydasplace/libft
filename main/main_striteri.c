/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:47:09 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 19:37:32 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	my_toupper_bridge(unsigned int i, char *s)
{
	(void)i;
	*s = ft_toupper(*s);
}

int	main(void)
{
	char str[] = "cedoskos SELAM";
	ft_striteri(str,my_toupper_bridge);
	printf("%s\n", str);
	return (0);
}