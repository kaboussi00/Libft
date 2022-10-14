/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:11:13 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/14 14:25:36 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while (ptr[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ptr[i] == ch)
			return (ptr + i);
		i--;
	}
	return (0);
}
int main ()
{
	int ch = 'r';
	char str []= "kawtbar";
	printf("%s\n", ft_strrchr(str, ch));
	printf("%s\n", strrchr(str, ch));
}