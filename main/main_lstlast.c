/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:15:44 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 20:19:53 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	node1 = ft_lstnew("ilk");
	node2 = ft_lstnew("orta");
	node3 = ft_lstnew("son");

	node1->next = node2;
	node2->next = node3;

	last = ft_lstlast(node1);

	if (last)
		printf("Son dugumun icerigi: %s\n", (char *)last->content);

	return (0);
}