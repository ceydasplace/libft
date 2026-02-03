/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstaddfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:22:44 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 20:32:48 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*list = ft_lstnew("ikinci");
	t_list	*new = ft_lstnew("birinci");

	ft_lstadd_front(&list, new);

	printf("Bas: %s\n", (char *)list->content);
	printf("Sonraki: %s\n", (char *)new->next->content);
	return (0);
}
