/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:58:10 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/05 19:17:54 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(unsigned int i, char c)
// {
// 	if (i >= 3)
// 		if (c >= '0' && c <= '9')
// 			c = '0';
// 	return (c);
// }

// char	f(unsigned int i, char c)
// {
// 	return (i + c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*j;

	i = 0;
	if (!s || !f)
		return (NULL);
	j = (char *)s;
	while (j[i])
	{
		j[i] = f(i, j[i]);
		i++;
	}
	return (j);
}
