/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validity_check_fresh.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:50:43 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/22 18:41:16 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**ft_validity_check_norm(char **tetris, int count, int i,
		char **clone)
{
	int x;
	int j;

	x = 0;
	j = 0;
	while (tetris[i][j++])
		if (tetris[i][j] != 'x')
			count++;
	clone[i] = (char *)malloc(sizeof(char) * count + 1);
	j = 0;
	while (tetris[i][j])
	{
		if (tetris[i][j] != 'x')
			clone[i][x++] = tetris[i][j++];
		else
			j++;
	}
	return (clone);
}

char		**ft_validity_check_fresh(char **tetris)
{
	char	**clone;
	int		count;
	int		i;

	clone = NULL;
	i = 0;
	while (tetris[i])
		i++;
	clone = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	while (tetris[i])
	{
		count = 0;
		clone = ft_validity_check_norm(tetris, count, i, clone);
		i++;
	}
	clone[i] = NULL;
	return (clone);
}
