/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:12:16 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/05 19:06:13 by kaboussi         ###   ########.fr       */
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
	if (n != 0 || n > i)
	{
		while (src[j] != '\0' && i < n - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	if (n < len_dst)
		return (n + len_src);
	else
		return (len_dst + len_src);
}
