/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adechaji <adechaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:08:03 by adechaji          #+#    #+#             */
/*   Updated: 2024/11/04 19:40:41 by adechaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main()
// {
// 	int fd;

// 	fd = open("test00", O_WRONLY, O_CREAT);
// 	// write(fd, "asdas\n", 7);
// 	// write(fd, "dasdasdas\n", 11);
// }
