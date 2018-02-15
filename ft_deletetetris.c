/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletetetris.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:50:23 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/22 18:38:30 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_deletetetris(int j, char *str, char *tetris)
{
	int		check;
	int		i;
	int		z;
	char	letter;

	i = 0;
	z = 0;
	while (!(ft_isopper(tetris[i])))
		i++;
	letter = 'A' + j;
	while (str[z] != letter)
		z++;
	check = z - i;
	while (str[z])
	{
		if (str[z] == letter)
			str[z] = '.';
		z++;
	}
	return (check);
}
