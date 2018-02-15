/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_placement.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 10:52:06 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/23 18:11:12 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_count(char *str, int *i, int *j)
{
	if (str[*i] == '#')
	{
		if (str[*i + 1] == '#')
			*j = *j + 1;
		if (str[*i - 1] == '#')
			*j = *j + 1;
		if (str[*i + 5] == '#')
			*j = *j + 1;
		if (str[*i - 5] == '#')
			*j = *j + 1;
	}
}

int			ft_check_placement(char *str)
{
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		while (str[i] == '.')
			i++;
		if ((str[i] == '\n' && str[i + 2] == '\0') && j < 6)
			return (0);
		ft_count(str, &i, &j);
		if ((str[i] == '\n' && (str[i + 1] == '\n' && (str[i + 1]))) && j < 6)
			return (0);
		if (((str[i] == '\n' && str[i + 1] == '\n') || i <= 18) && j >= 6)
		{
			j = 0;
			i = -1;
			str = str + 21;
		}
		i++;
	}
	return (1);
}
