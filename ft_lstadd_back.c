/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:19:59 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/29 19:37:16 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
	{
		if ((*lst)->next == NULL)
		{
			(*lst)->next = new;
			return ;
		}
		*lst = (*lst)->next;
	}
}

int main ()
{
	t_list	*l;
	t_list	*k;
	t_list	*new;

	l = ft_lstnew("kawtar");
	k = ft_lstnew("kaw");
	new = ft_lstnew("ayoub");
	l->next = k;
	ft_lstadd_back(&l, new);
	while (l != NULL)
	{
		printf("%s\n", l->content);
		l = l->next;
	}
}
