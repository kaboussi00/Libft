/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:23:45 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/20 14:59:48 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	a = ft_strlen(src);
	return (a);
}
// int main()
// {
// 	char	dst[] = "kawtar ";
// 	char	src[] = "aboussi";

// 	printf("%zu\n",ft_strlcpy(dst,src,2));
// 	printf("%s",dst);
// 	// printf("%zu\n",strlcpy(dst,src,2));
// }
