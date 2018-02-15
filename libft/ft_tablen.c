/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 16:51:40 by frahaing          #+#    #+#             */
/*   Updated: 2018/02/09 16:51:41 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tablen(const void *tab, int elem)
{
	int					len;
	const unsigned char	*ptr;
	unsigned char		nul[elem];

	len = 0;
	ptr = tab;
	ft_bzero(nul, elem);
	while (ft_memcmp(ptr + (len * elem), nul, elem) != 0)
		len++;
	return (len);
}
