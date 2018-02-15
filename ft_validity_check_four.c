/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validity_check_four.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:03:44 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/22 18:40:59 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_validity_check_four(char *str)
{
	int i;
	int count_tetris;
	int count_points;
	int count_nlines;

	i = -1;
	count_tetris = 0;
	count_points = 0;
	count_nlines = 0;
	while (str[++i] && i <= 19)
	{
		if (str[i] == '#')
			count_tetris++;
		if (str[i] == '.')
			count_points++;
		if (str[i] == '\n' && (i == 4 || i == 9 || i == 14 || i == 19))
			count_nlines++;
	}
	if (count_tetris != 4 || count_points != 12 || count_nlines != 4)
		return (0);
	if (str[i] == '\n')
		return (ft_validity_check_four(str + i + 1));
	else if (str[i] == '\0')
		return (1);
	return (0);
}
