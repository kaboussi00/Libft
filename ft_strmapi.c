/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:58:10 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/04 12:23:19 by kaboussi         ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
	int		i;
	char	*j;

	i = 0;
	j = (char *)s;
	while (j[i])
	{
		j[i] = f(i, j[i]);
		i++;
	}
	return (j);
}
// int main()
// {
// 	char s[] = "njd523d5d";
// 	printf("%s\n",ft_strmapi(s,f));

// }
