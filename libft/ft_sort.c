/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:40:15 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/08 16:21:43 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] && tab[i + 1])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap((void **)&tab[i], (void **)&tab[j]);
			j++;
		}
		i++;
	}
}
