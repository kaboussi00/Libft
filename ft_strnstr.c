/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:13:23 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/20 14:59:59 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*b;

	i = 0;
	j = 0;
	b = (char *)big;
	while (b[i] != '\0')
	{
		k = i;
		while (b[k] == little[j] && j < len - 1)
		{
			if (little [j +1] == '\0')
			{
				return (b + i);
			}
			k++;
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

// int main ()
// {
// 	char big[]="kawtarab";
// 	char little[]="ara";

// 	printf("%s\n", ft_strnstr(big, little, 4));
// 	printf("%s", strnstr(big, little, 4));
// }
