/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:08:30 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/25 20:18:59 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s,fd);
	write (fd, "\n", 1);
}
int main()
{
	int fd1 = open("test.fd", O_RDWR);
	printf("%d\n",fd1);
	char s[] = "kawtar";
	ft_putendl_fd(s,fd1);
}
