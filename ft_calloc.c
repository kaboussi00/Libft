/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:07:10 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/20 11:16:21 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, n);
	return (p);
}
// int main ()
// {
// 	int *ptr;
// 	ptr = ft_calloc(4,sizeof(int));
// 	ptr[2]=5;
// 	printf("%d\n",*ptr);
// }
