/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:02:19 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/20 15:14:07 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return (s1 + i);
		i++;
	}
	return (0);
}
// int main ()
// {
// 	const char s[] = "kawtar";
// 	// int c = 'r';
// 	// size_t n = 4;
// 	printf("%s\n",ft_memchr(s,0,0));
// 	const char s1[] = "kawtar";
// 	// int c1 = 'r';
// 	printf("%s\n",memchr(s1,0,0));
// }