/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:44:39 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/06 13:03:27 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)dest;
	st2 = (unsigned char *)src;
	if (st1 > st2)
	{
		while (n--)
		{
			st1[n] = st2[n];
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
