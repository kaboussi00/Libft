/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:27:43 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/21 16:01:08 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = ft_strlen(s1)-1;
	while (s1[i])
	{
		if (check(set,s1[i]) == 1)
			i++;
		else
			break ;
	}
	while (len >= 0)
	{
		if (check(set,s1[len]) == 1)
			len--;
		else
			break ;
	}
	return (ft_substr(s1, i, len - i +1));
}
// int main  ()
// {
// 	char s1[] = "abdeagbzcd";
// 	char set[] = "abcd";
// 	printf("%s\n",ft_strtrim(s1,set));
// }