/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:12:16 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/10 13:32:56 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i] && i + j < dstsize - 1 && dstsize != 0)
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	while (src[i])
		i++;
	if (j > dstsize)
		return (i + dstsize);
	return (i + j);
}
