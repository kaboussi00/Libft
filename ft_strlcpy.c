/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:23:45 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/05 12:05:17 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	a = ft_strlen(src);
	return (a);
}
// int main()
// {
// 	char	src[] = "kawtar";
// 	char	dst[] = "AAAAAAAAAAAA";
// 	printf("%zu\n",ft_strlcpy(dst,src,1));
// 	printf("%s\n",dst);
// 	char	src1[] = "kawtar";
// 	char	dst1[] = "AAAAAAAAAAAA";
// 	printf("%zu\n",strlcpy(dst1,src1,1));
// 	printf("%s\n",dst1);
// }
