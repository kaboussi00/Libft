/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:20:22 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/17 14:43:54 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*ds;
	unsigned char	*sr;

	ds = (unsigned char*)dest;
	sr = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		*ds = *sr;
		ds++;
		sr++;
		i++;
	}
	return (dest);
}

// int main ()
// {
// 	int dest[] = {1,2,3,4,5,6};
// 	int src[] = {7,8,9};
// 	size_t n = 2;
// 	size_t i = 0;
// 	while (i < n)
// 		printf("%d\n", ft_memcpy(dest, src, n));
// 		i++;
// 	int dest1[] = {1,2,3,4,5,6};
// 	int src1[] = {7,8,9};
// 	i = 0;
// 	while (i < n)
// 		printf("%d\n", memcpy(dest, src, n));
// 		i++;
// }