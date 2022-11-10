/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:56:56 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/09 16:34:34 by kaboussi         ###   ########.fr       */
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
	t_list	*tmp;

	tmp = NULL;
	if (!lst || !*lst || !del)
		return ;
	while (*lst && del)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = tmp;
	}
}
