/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:34:08 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 20:38:01 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list	*node;
	t_list	*node2;
	t_list	*node3;

	node->next = node2;
	node2->next = node3;
	ft_lstdelone(node2, ft_bzero);
	
	
}