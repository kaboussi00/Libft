/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:54:54 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/05 19:06:47 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			j;

	j = 0;
	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		if (ft_strlen(s) < len)
			len = ft_strlen(s);
		p = ft_calloc(len + 1, sizeof(char));
		if (!p)
			return (NULL);
		while (j < len)
			p[j++] = s[start++];
	}
	else
		p = malloc(1);
	if (!p)
		return (p);
	p[j] = '\0';
	return (p);
}
