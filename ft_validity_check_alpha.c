/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validity_check_alpha.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:55:51 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/23 18:12:09 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

char	**ft_validity_check_alpha(char **tetris)
{
	int		i;
	char	letter;
	int		j;

	i = 0;
	j = 0;
	letter = 'A';
	while (tetris[i])
	{
		j = 0;
		while (tetris[i][j])
		{
			if (tetris[i][j] == '#')
				tetris[i][j] = letter;
			j++;
		}
		letter++;
		i++;
	}
	return (tetris);
}
