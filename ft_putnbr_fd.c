/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:23:13 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/26 12:56:10 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n == -2147483648)
	{
		ft_putchar_fd('-',fd);
		ft_putchar_fd('2',fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-',fd);
		nb = n * -1;
	}
	else
		nb = n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10,fd);
	ft_putchar_fd(nb % 10 + 48,fd);
}
// int main()
// {
// 	int fd1 = open("test.fd", O_RDWR);
// 	printf("%d\n",fd1);
// 	int	n = -60*2;
// 	ft_putnbr_fd(n,fd1);
// }