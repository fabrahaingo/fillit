/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:33:44 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/22 20:34:09 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_fill(int squarelen)
{
	int		i;
	char	*stetris;
	int		clone;
	int		clone2;

	i = 0;
	clone2 = squarelen;
	clone = squarelen;
	stetris = (char*)malloc(sizeof(char) * (((squarelen + 1) *
								(squarelen + 1) + 1)));
	stetris[(squarelen * (squarelen + 1)) + 1] = '\0';
	while (clone2--)
	{
		while (clone > 0)
		{
			stetris[i++] = '.';
			clone--;
		}
		stetris[i++] = '\n';
		clone = squarelen;
	}
	i = 1;
	while (i < squarelen + 2)
		stetris[squarelen * (squarelen + 1) + i++] = '\0';
	return (stetris);
}
