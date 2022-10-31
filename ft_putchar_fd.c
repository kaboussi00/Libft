/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:01:03 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/25 19:14:06 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd1 = open("test.fd", O_RDWR);
// 	int fd2 = open("test1.fd", O_RDWR);
// 	ft_putchar_fd('n', fd1);
// 	ft_putchar_fd('b', fd2);
// }