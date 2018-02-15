/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 17:05:27 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/22 18:39:21 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrtupper(int nb)
{
	int i;
	int res;

	i = 2;
	if (nb == 4)
		return (2);
	while (i < nb / 2)
	{
		res = i * i;
		if (res >= nb)
			return (i);
		i++;
	}
	return (0);
}
