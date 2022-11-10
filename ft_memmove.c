/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:44:39 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/09 16:25:06 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ds1;
	unsigned char	*st2;

	if (!dest && !src)
		return (NULL);
	ds1 = (unsigned char *)dest;
	st2 = (unsigned char *)src;
	if (ds1 > st2)
	{
		while (n--)
		{
			ds1[n] = st2[n];
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
