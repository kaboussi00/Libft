/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:03:56 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/26 15:17:42 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(unsigned int i, char *c)
{
	if (i >= 3)
		if (*c >= '0' && *c <= '9')
			*c = '0';
	return ;
}

void	ft_striteri(char *s, void (*f)(unsigned int i, char *c))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i,&s[i]);
		i++;
	}
}
// int main()
// {
// 	char s[] = "njd523d5d";
// 	ft_striteri(s,f);
// 	printf("%s",s);

// }