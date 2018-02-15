/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <frahaing@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 19:09:40 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/04 19:09:42 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*clones1;
	unsigned char	*clones2;

	i = 0;
	clones1 = (unsigned char *)s1;
	clones2 = (unsigned char *)s2;
	while (i < n)
	{
		if (clones1 && clones2 && clones1[i] != clones2[i])
			return (clones1[i] - clones2[i]);
		i++;
	}
	return (0);
}
