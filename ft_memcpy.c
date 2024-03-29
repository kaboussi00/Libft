/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:20:22 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/10 13:32:08 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
