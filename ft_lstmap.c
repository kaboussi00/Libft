/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:21:38 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/06 11:16:56 by kaboussi         ###   ########.fr       */
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
	t_list	*tmp2;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	tmp2 = lst;
	while (tmp2 && f)
	{
		ft_lstadd_back(&ret, ft_lstnew(f(tmp2->content)));
		tmp2 = tmp2->next;
	}
	return (ret);
}
int main ()
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	ft_lstadd_back(&a ,(ft_lstnew(ft_strdup("kawtar"))));
	ft_lstadd_back(&a ,(ft_lstnew(ft_strdup("aboussi"))));
	ft_lstadd_back(&a ,(ft_lstnew(ft_strdup("aanjaimi"))));
}
