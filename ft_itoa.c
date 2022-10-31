/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:13:21 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/23 14:16:02 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*p;
	int		nb;
	int		i;

	i = 0;
	nb = n;
	while (n && ++i)
		n = n / 10;
	if (nb < 0)
		i++;
	p = ft_calloc(i + 1, sizeof(char));
	if (!p)
		return (NULL);
	--i;
	if (nb < 0)
	{
		p[0] = '-';
		nb *= -1;
	}
	while (nb)
	{
		p[i--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (p);
}

// int main ()
// {
// 	printf("%s\n",ft_itoa(-654596));
// }