/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:19:59 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/04 11:01:50 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*k;
	t_list	*tmp;

	if (*lst)
	{
		tmp = *lst;
		k = ft_lstlast(tmp);
		k->next = new;
	}
	else
		*lst = new;
}

// int main ()
// {
// 	t_list	*l;
// 	t_list	*k;
// 	t_list	*new;

// 	l = ft_lstnew("kawtar");
// 	k = ft_lstnew("kaw");
// 	new = ft_lstnew("ayoub");
// 	l->next = k;
// 	ft_lstadd_back(&l, new);
// 	while (l != NULL)
// 	{
// 		printf("%s\n", l->content);
// 		l = l->next;
// 	}
// }
