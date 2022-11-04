/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:05:15 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/04 12:15:35 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// 	content = NULL;
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

// int main()
// {
// 	t_list	*l;
// 	t_list	*k;
// 	t_list	*a;
// 	t_list	*r;

// 	l = ft_lstnew(ft_strdup("kawtar"));
// 	k = ft_lstnew(ft_strdup("kaw"));
// 	a = ft_lstnew(ft_strdup("ab"));
// 	l->next = k;
// 	k->next = a;
// 	ft_lstdelone(k, del);
// 	while (l)
// 	{
// 		printf("%s\n", l->content);
// 		l = l->next;
// 	}
// }