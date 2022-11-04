/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:56:56 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/04 12:16:16 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// 	content = NULL;
// }

void	ft_lstclear(t_list **lst, void (*del)(void*lst))
{
	while (*lst && del)
	{
		del((*lst)->content);
		free(*lst);
		(*lst) = (*lst)->next;
	}
}

// int main()
// {
// 	t_list	*l;
// 	t_list	*k;
// 	t_list	*a;

// 	l = ft_lstnew(ft_strdup("kawtar"));
// 	k = ft_lstnew(ft_strdup("kaw"));
// 	a = ft_lstnew(ft_strdup("ab"));
// 	l->next = k;
// 	k->next = a;
// 	ft_lstclear(&l, del);
// 	while (l)
// 	{
// 		printf("%s\n", l->content);
// 		l = l->next;
// 	}
// }
