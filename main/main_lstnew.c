/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:55:37 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 20:14:13 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"


/*
int	main(void)
{
	t_list	*node;
	int		*a = malloc(3*sizeof(int));
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	node = ft_lstnew(a);


	int *tab = (int *)node->content;
	
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);

}*/


int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Elma");
	printf("%s", (char *)node->content);
}