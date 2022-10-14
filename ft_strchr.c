/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:39:30 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/11 19:27:54 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == ch)
			return (ptr + i);
		i++;
	}
	return (0);
}

int main()
{
	int ch = 'w';
	char str []= "kawtbar";
	printf("%s\n", ft_strchr(str, ch));
	printf("%s\n", strchr(str, ch));
}