/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:29:15 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/23 18:09:32 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_checkplace(char *tetris, char *str, int squarelen, size_t i)
{
	int j;
	int checkpoint;

	j = 0;
	checkpoint = i;
	while (str[i] && tetris[j])
	{
		if (str[i] == '\n' && tetris[j] != '\n')
			return (0);
		else if (tetris[j] == '\n' && tetris[j + 1])
		{
			i = checkpoint + squarelen + 1;
			checkpoint = i;
			j++;
			if (str[i] == '\0')
				return (0);
		}
		if (ft_isopper(str[i]) && ft_isopper(tetris[j]))
			return (0);
		j++;
		i++;
	}
	return (1);
}

static char		*ft_placetetris(char *str, char *tetris,
		int squarelen, size_t i)
{
	int	check;
	int j;

	check = i;
	j = 0;
	while (tetris[j])
	{
		while (tetris[j] == '.')
		{
			j++;
			i++;
		}
		if (ft_isopper(tetris[j]))
			str[i++] = tetris[j++];
		else if (tetris[j] == '\n')
		{
			i = check + squarelen + 1;
			j++;
			check = i;
		}
	}
	return (str);
}

static char		*ft_bck(char **tab, int squarelen, char *str, size_t i)
{
	int		j;

	j = 0;
	while (tab[j])
	{
		while (!(ft_checkplace(tab[j], str, squarelen, i)) && str[i] != '\0')
			i++;
		if (!str[i])
		{
			if (j == 0)
				return (ft_bck(tab, squarelen + 1, ft_fill(squarelen + 1), 0));
			if (j != 0)
			{
				i = ft_deletetetris(j - 1, str, tab[j - 1]) + 1;
				j--;
			}
		}
		else
		{
			str = ft_placetetris(str, tab[j++], squarelen, i);
			i = 0;
		}
	}
	return (str);
}

char			*ft_fillit(char **tab)
{
	int		squarelen;
	char	*str;
	char	*res;
	size_t	i;

	i = 0;
	squarelen = ft_squaremin(tab);
	str = ft_fill(squarelen);
	res = ft_bck(tab, squarelen, str, i);
	return (res);
}
