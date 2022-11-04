/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:54:54 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/04 12:23:57 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	size_t			j;

	i = 0;
	p = ft_calloc(len + 1, sizeof(char));
	if (!p)
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			j = 0;
			while (j < len)
			{
				p[j] = s[i];
				j++;
				i++;
			}
		}
		i++;
	}
	return (p);
}
// int main ()
// {
// 	char s[] = "kawtar";
// 	unsigned int start = 10;
// 	size_t len = 4;
// 	printf( "%s\n",ft_substr(s, start, len));
// }
