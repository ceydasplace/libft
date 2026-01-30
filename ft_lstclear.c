/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:13:56 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/30 13:02:23 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*remove;
	t_list	*current;

	if (!*lst || !*del || !lst)
		return ;
	current = *lst;
	while (current)
	{
		remove = current;
		current = current->next;
		del(remove->content);
		free(remove);
	}
	*lst = NULL;
}
