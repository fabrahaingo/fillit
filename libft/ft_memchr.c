/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <frahaing@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:38:02 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/04 16:38:09 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	clonec;
	unsigned char	*clones;

	i = 0;
	clonec = c;
	clones = (unsigned char *)s;
	while (i < n)
	{
		if (clones[i] == clonec)
			return (clones + i);
		i++;
	}
	return (NULL);
}
