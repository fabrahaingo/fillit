/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:49:10 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/30 14:44:25 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_fun(char c, char const *s)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return ((char**)s);
	while (s[i++])
		if (s[i - 1] != c && (s[i] == c || !s[i]))
			j++;
	tab = (char **)malloc(sizeof(*tab) * (j + 1));
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**tab;

	i = 0;
	j = 0;
	tab = NULL;
	if (s == NULL || ((tab = ft_fun(c, s)) == NULL))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
			tab[j++] = ft_strsub(s, start, i - start);
	}
	tab[j] = NULL;
	return (tab);
}
