/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:11:01 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/14 21:37:22 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_words(char *str, char delim)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i++])
		if (str[i - 1] != delim && (str[i] == delim || !str[i]))
			j++;
	return (j);
}
