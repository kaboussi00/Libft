/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:09:13 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/01 15:18:04 by kaboussi         ###   ########.fr       */
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
// int main ()
// {
// 	t_list	*l;
// 	t_list	*k;
// 	t_list	*ret;

// 	l = ft_lstnew("kawtar");
// 	k = ft_lstnew("kaw");
// 	l->next = k;
// 	ret = ft_lstlast(l);
// 		
;
// }
// int main ()
// {
// 	t_list *t;
// 	t_list	*a;
// 	t_list	*b;
// 	t_list *f;

// 	t = malloc(sizeof(t_list));
// 	t->content = ft_strdup("kawtar");
// 	a = malloc(sizeof(t_list));
// 	a->content = ft_strdup("tar");
// 	b = malloc(sizeof(t_list));
// 	b->content = ft_strdup("aboussi");
// 	t->next = a;
// 	a->next = b;
// 	b->next = NULL;
// 	f = ft_lstlast(t);
// 	printf ("%s\n" ,f->content);
// }