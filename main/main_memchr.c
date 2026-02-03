/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:36:12 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 15:41:23 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	main(void)
{
	char	s[] = "ceydoskus merhaba";
	int		c = 'm';
	size_t	n = 11;
	char 	*str;
	str = ft_memchr(s, c, n);
	printf("%s",str);
}
