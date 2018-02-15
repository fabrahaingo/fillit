/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:54:08 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/14 21:55:49 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
