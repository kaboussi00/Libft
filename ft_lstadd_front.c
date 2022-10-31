/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:45:25 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/29 18:05:48 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new->next = *lst;
		*lst = new;
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
	ft_lstadd_front(&l, new);
	while (l != NULL)
	{
		printf("%s\n", l->content);
		l = l->next;
	}

}
