/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:38:24 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/20 17:10:30 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)str1;
	st2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
		{
			return (st1[i] - st2[i]);
		}
		st1++;
		st2++;
		i++;
	}
	return (0);
}
// int main ()
// {
// 	const char str1[] = "aawtar";
// 	const char str2[] = "aawtar";
// 	size_t n = 2;
// 	printf("%d\n",ft_memcmp(str1,str2,n));
// 	const char str11[] = "aawtar";
// 	const char str22[] = "aawtar";
// 	printf("%d",memcmp(str11,str22,n));
// 	}