/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:08:44 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/29 16:55:57 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*k;

	k = malloc(sizeof(t_list));
	k->content = content;
	k->next = NULL;
	return (k);
}
// int main ()
// {
// 	t_list	*l;
// 	t_list	*k;
// 	t_list	*a;
// 	l = ft_lstnew("kawtar");
// 	printf("%s\n",l->content);
// 	printf("%s\n",l->next);
// 	k = ft_lstnew("kaw");
// 	printf("%s\n",k->content);
// 	printf("%s\n",k->next);
// 	a = ft_lstnew("ayoub");
// 	printf("%s\n",a->content);
// 	printf("%s\n",a->next);
// }