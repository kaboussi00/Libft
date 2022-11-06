/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:39:30 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/05 19:06:00 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	if (ch == 0)
		return (ptr + ft_strlen(ptr));
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)ch)
			return (ptr + i);
		i++;
	}
	return (0);
}
