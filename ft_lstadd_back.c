/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:19:59 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/05 19:04:09 by kaboussi         ###   ########.fr       */
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
