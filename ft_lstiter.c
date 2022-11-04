/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:06:41 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/04 14:35:58 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(void *content)
// {
// 	free(content);
// 	content = NULL;
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = NULL;
	while (tmp && f)
	{
		tmp = lst->next;
		f(lst->content);
		free(lst);
		lst = tmp;
	}
}

// int main()
// {
// 	t_list	*t = NULL;

// 	ft_lstadd_back(&t, ft_lstnew(ft_strdup("kawtar")));
// 	ft_lstadd_back(&t, ft_lstnew(ft_strdup("is")));
// 	ft_lstadd_back(&t, ft_lstnew(ft_strdup("awesome")));
// 	ft_lstiter(t, f);
// 	printf("%s\n", t->content);
// 	while (t)
// 	{
// 		printf("%s\n", t->content);
// 		t = t->next;
// 	}
// }
