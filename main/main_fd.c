/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduztas <oduztas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:25:55 by oduztas           #+#    #+#             */
/*   Updated: 2026/02/02 16:37:21 by oduztas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> // Required if you want to open actual files

int main(void)
{
	/*
    // 1. Writing to Standard Output (Normal terminal)
    ft_putstr_fd("Hello to Stdout\n", 1);

    // 2. Writing to Standard Error (Error stream)
    ft_putstr_fd("Error: Something went wrong\n", 2);
	*/
    // 3. Writing to a custom file
    int fd = open("text5.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if (fd != -1)
    {
        ft_putstr_fd("This ceyda moommo into a file", fd);
        close(fd);
    }

    return (0);
}
