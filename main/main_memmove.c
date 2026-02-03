/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:12:15 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 16:24:43 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	dst[] = "selam ceyda orinalligimi korudum";
	char	*son;
	son = ft_memmove(dst+3, dst, 7);
	printf("%s\n", son);
}