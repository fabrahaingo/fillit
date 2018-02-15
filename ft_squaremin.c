/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nbtetris.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 17:07:36 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/22 18:39:50 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_squaremin(char **tab)
{
	int i;
	int squarelen;

	i = 0;
	while (tab[i])
		i++;
	squarelen = ft_sqrtupper(i * 4);
	return (squarelen);
}
