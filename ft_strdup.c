/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:47:36 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/04 12:20:41 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	st2;
	char	*p;
	int		i;

	st2 = ft_strlen(str);
	p = ft_calloc(st2 +1, sizeof(char));
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
// int main ()
// {
// 	// const char str:
// 	 char str[] = "kawtar";
// 	// str2[] = "kawtar";
// 	printf("%s\n",ft_strdup(str));
// 	// printf("%s\n",strdup(str2));
// }
