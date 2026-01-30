/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:14:19 by oduztas           #+#    #+#             */
/*   Updated: 2026/01/30 13:18:17 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*objlst;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	objlst = NULL;
	while (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		if (!objlst)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, objlst);
		lst = lst->next;
	}
	return (newlst);
}
