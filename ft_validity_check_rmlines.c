/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validity_check_rmlines.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:05:06 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/23 18:25:57 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		*ft_replace_line_char(char *str, int i, int width)
{
	while (width--)
		str[i++] = 'x';
	str[i] = 'x';
	return (str);
}

static char		*ft_replace_column_char(char *str, int i, int height)
{
	while (height--)
	{
		str[i] = 'x';
		i += 5;
	}
	return (str);
}

static int		ft_column_empty(char *str, int height, int i)
{
	int count;
	int clone;

	count = 0;
	clone = height;
	while (clone--)
	{
		if (str[i] == '.' || str[i] == 'x')
			count++;
		if (count == height)
			return (1);
		i += 5;
	}
	return (0);
}

static int		ft_line_empty(char *str, int width)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] == '.' || str[i] == 'x')
			count++;
		if (count == width)
			return (1);
		i++;
	}
	return (0);
}

char			**ft_validity_check_rmlines(char **tetris)
{
	int i;
	int j;

	i = -1;
	while (tetris[++i])
	{
		j = 0;
		while (tetris[i][j])
		{
			if (tetris[i][j] == '.' || tetris[i][j] == 'x')
			{
				if (ft_line_empty(&tetris[i][j], 4) == 1)
				{
					tetris[i] = ft_replace_line_char(tetris[i], j, 4);
					j += 4;
				}
				if (ft_column_empty(tetris[i], 4, j % 5) == 1)
					tetris[i] = ft_replace_column_char(tetris[i], j % 5, 4);
				j++;
			}
			else
				j++;
		}
	}
	return (tetris);
}
