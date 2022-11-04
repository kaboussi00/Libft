/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:21:38 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/04 12:14:40 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*f(void *content)
// {
// 	content = "2022";
// 	return (content);
// }

// void	del(void *content)
// {
// 	free(content);
// 	content = NULL;
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	ret = NULL;
	tmp = lst;
	while (tmp)
	{
		ft_lstadd_back(&ret, ft_lstnew(f(tmp->content)));
		tmp = tmp->next;
	}
	ft_lstiter(lst, del);
	return (ret);
}

// int main()
// {	t_list	*ret;
// 	t_list	*t = NULL;

// 	ft_lstadd_back(&t, ft_lstnew(ft_strdup("kawtar")));
// 	ft_lstadd_back(&t, ft_lstnew(ft_strdup("is")));
// 	ft_lstadd_back(&t, ft_lstnew(ft_strdup("awesome")));
// 	ret = ft_lstmap(t, f, del);
// 	while (ret)
// 	{
// 		printf("%s\n", ret->content);
// 		ret = ret->next;
// 	}
// 	while (t)
// 	{
// 		printf("%s\n", t->content);
// 		t = t->next;
// 	}
// }
