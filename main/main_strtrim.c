/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:25:45 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 18:38:44 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int	main(void)
{
	char	s1[] = "batusceydos batustusuus";
	char	set[] = "tusab";
	printf("%s", ft_strtrim(s1, set));
}