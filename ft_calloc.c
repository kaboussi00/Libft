/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:07:10 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/05 13:00:37 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	p = malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}

// int main ()
// {
// 	int *ptr;
// 	ptr = ft_calloc(SIZE_MAX, SIZE_MAX);
// 	if (!ptr)
// 		printf("Can't allocate\n");
// 	else
// 	{
// 		for (int i = 0;i < 4;i++)
// 			printf("%c\n", ptr[i]);
// 	}
// }
