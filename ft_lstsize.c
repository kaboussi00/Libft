/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:13:11 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/29 18:00:35 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
int main ()
{

	t_list	*l;
	t_list	*k;

	l = ft_lstnew("kawtar");
	k = ft_lstnew("kaw");
	l->next = k;
	printf("%d\n",ft_lstsize(l));
}