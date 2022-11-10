/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:47:36 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/10 13:32:39 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*p;
	int		i;

	len = ft_strlen(str);
	p = ft_calloc(len + 1, sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
