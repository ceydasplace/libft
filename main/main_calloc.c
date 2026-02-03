/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:23:50 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 14:34:38 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    int *m = malloc(sizeof(int) * 10);
    int *c = ft_calloc(10, sizeof(int));

    printf("Malloc (Rastgele/Cop): %d\n", *m);
    printf("Calloc (Her zaman 0): %d\n", *c);

    free(m);
    free(c);
    return (0);
}