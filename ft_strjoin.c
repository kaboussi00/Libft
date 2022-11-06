/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:53:51 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/05 19:08:09 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	len1;
	size_t	len2;
	char	*p;	

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!p)
		return (NULL);
	j = 0;
	while (s1[i])
	{
		p[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		p[j++] = s2[i++];
	}
	return (p);
}
