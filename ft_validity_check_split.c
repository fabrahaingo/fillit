/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validity_check_split.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:19:29 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/23 18:05:29 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_validity_check_split(char *str)
{
	int		i;
	int		count_l;
	char	**tab_tetris;
	char	letter;

	letter = 'A';
	i = 0;
	count_l = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count_l++;
		if (count_l == 5 && str[i] == '\n' && str[i + 1] != '\0')
		{
			str[i] = '~';
			count_l = 0;
		}
		i++;
	}
	i = 0;
	tab_tetris = ft_strsplit(str, '~');
	tab_tetris = ft_validity_check_rmlines(tab_tetris);
	tab_tetris = ft_validity_check_fresh(tab_tetris);
	tab_tetris = ft_validity_check_alpha(tab_tetris);
	return (tab_tetris);
}
