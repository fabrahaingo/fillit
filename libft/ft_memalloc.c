/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:28:18 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/23 18:20:41 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

void	*ft_memalloc(size_t size)
{
	void	*s;

	if ((s = (void*)malloc(sizeof(void) * size)) == 0)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
