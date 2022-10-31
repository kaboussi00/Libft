/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:12:16 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/20 14:59:44 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	j = 0;	
	i = 0;
	while (dst[i] != '\0')
		i++;
	len_dst = i;
	while (src[j] != '\0')
		j++;
	len_src = j;
	j = 0;
	while (src[j] != '\0' && i < n-1)
	{
		dst[i]=src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	if (n < len_dst)
		return (n + len_src);
	else
		return (len_dst + len_src);
}
// int main ()
// {
// 	char dst1[] = "kawtar";
// 	char src1[] = "aboussi";
// 	char dst2[] = "kawtar";
// 	char src2[] = "aboussi";
// 	printf("%zu\n",ft_strlcat(dst1,src1,9));
// 	printf("%s\n", dst1);
// 	printf("%zu\n",strlcat(dst2,src2,9));
// 	printf("%s\n", dst2);
// 	return 0;
// }