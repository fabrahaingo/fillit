/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stocknextword.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:58:25 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/25 15:58:26 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char *str, char delim)
{
	int i;

	i = 0;
	while (str[i] != delim && str[i])
		i++;
	return (i);
}

char		*ft_stocknextword(char *str, int i, char delim)
{
	char	*word;
	int		j;

	word = NULL;
	j = 0;
	word = (char *)ft_memalloc(sizeof(char) * (ft_wordlen(str + i, delim)));
	while (str[i] != delim)
	{
		if (str[i] == '\0')
		{
			word[j] = '\0';
			return (word);
		}
		word[j] = str[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}
