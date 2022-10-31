/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:22:20 by kaboussi          #+#    #+#             */
/*   Updated: 2022/10/26 12:25:33 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calcule_mot(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			j++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (j);
}

static int	calcule_lettre(char const *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
	{
		j++;
		i++;
	}
	return (j);
}

static char	*ft_charge(char const *str, char c, int j)
{
	int		i;
	int		k;
	char	*p;

	i = 0;
	p = ft_calloc((j + 1), sizeof(char));
	if (!p || j == 0)
		return (NULL);
	k = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
		p[k++] = str[i++];
	p[k] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;
	int		j;
	char	*ptr;
	int		len;

	i = 0;
	p = ft_calloc((calcule_mot(s, c) + 1), sizeof(char *));
	if (!p)
		return (NULL);
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		len = calcule_lettre(s + i, c);
		ptr = ft_charge(s + i, c, len);
		if (ptr)
			p[j++] = ptr;
		i += len;
	}
	p[j] = NULL;
	return (p);
}

// int main()
// {  
// 	char str[]="iiiiiayoubiiiiiiikawtariiiiiiinoureiiiifatihaiiii";
// 	char c = 'i';
// 	char	**s = ft_split(str, c);
// 	int i = 0;

// 	while (s[i])
// 	{
// 		printf("<%s>\n", s[i]);
// 		i++;
// 	}
// }