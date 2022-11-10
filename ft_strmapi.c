/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:58:10 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/10 13:33:04 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char c)
{
	if (i >= 3)
		if (c >= '0' && c <= '9')
			c = '0';
	return (c);
}

// char	f(unsigned int i, char c)
// {
// 	return (i + c);
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	i = 0;
	if (!s || !f)
		return (NULL);
	p = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}
