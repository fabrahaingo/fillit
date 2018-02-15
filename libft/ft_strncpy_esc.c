/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_esc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 14:19:09 by frahaing          #+#    #+#             */
/*   Updated: 2018/02/09 14:19:11 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy_esc(char *dst, const char *src, size_t len)
{
	size_t	didx;
	size_t	sidx;

	sidx = 0;
	didx = 0;
	while (src[sidx] && sidx < len)
	{
		if (src[sidx] == '\\')
			sidx++;
		dst[didx++] = src[sidx++];
	}
	while (didx < len)
		dst[didx++] = 0;
	return (dst);
}
