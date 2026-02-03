/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:33:17 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 19:43:57 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	my_toupper_bridge(unsigned int i, char s)
{
	(void)i;
	s = ft_toupper(s);
	return (s);
}

int	main(void)
{
	char str[] = "cedoskos SELAM";
	printf("%s\n", ft_strmapi(str,my_toupper_bridge));
	return (0);
}