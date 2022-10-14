/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:51:45 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/11 15:43:55 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s,int c,size_t n)
{
	size_t i;
	unsigned char *ptr;
	ptr = (unsigned char*)s;
	i = 0;
	while (i < n && *ptr)
	{
		*ptr = c;
		ptr++;
		i++;
	}
	return (s);
}
#include <stdio.h>
// int main ()
// {
// 	char s[] = "kawtar";
// 	memset(s, 'o', 7);
// 	printf("%s",s);
// }
