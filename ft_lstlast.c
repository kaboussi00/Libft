/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:09:13 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/29 19:15:37 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
int main ()
{
	t_list	*l;
	t_list	*k;
	t_list	*ret;

	l = ft_lstnew("kawtar");
	k = ft_lstnew("kaw");
	l->next = k;
	ret = ft_lstlast(l);
	printf("%s\n", ret->content);
}
