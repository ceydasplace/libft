/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:48:26 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 17:05:41 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main(void)
{
	char	s[] = "selam ben ceyda";
	int	c = 'y';
	char	*str = ft_strchr(s, c);
	printf("%s", str);
}
