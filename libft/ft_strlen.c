/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <raphaelkriefbm@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:44:56 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/23 18:17:06 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

size_t		ft_strlen(const char *s)
{
	int		j;

	j = 0;
	while (s[j] != '\0')
		j++;
	return (j);
}