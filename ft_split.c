/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboussi <kaboussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:22:20 by kaboussi          #+#    #+#             */
/*   Updated: 2022/11/10 13:32:34 by kaboussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calcule_mot(char const *str, char c)
{
	int	i;
	int	calcul;

	i = 0;
	calcul = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			calcul++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (calcul);
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

static char	*ft_charge(char const *str, char c, int len)
{
	int		i;
	int		k;
	char	*p;

	i = 0;
	p = ft_calloc((len + 1), sizeof(char));
	if (!p || len == 0)
		return (NULL);
	k = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
		p[k++] = str[i++];
	p[k] = '\0';
	return (p);
}

static char	**ft_free(char **p, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(p[i]);
		i++;
	}
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;
	int		j;
	char	*ptr;
	int		len;

	if (!s)
		return (NULL);
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
		if (!ptr)
			return (ft_free(p, j));
		if (ptr)
			p[j++] = ptr;
		i += len;
	}
	p[j] = NULL;
	return (p);
}
