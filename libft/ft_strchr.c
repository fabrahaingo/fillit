/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <frahaing@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 22:04:51 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/05 22:04:53 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*clones;
	char	clonec;

	clones = (char *)s;
	clonec = (char)c;
	while (*clones)
	{
		if (*clones == clonec)
			return (clones);
		clones++;
	}
	if (*clones == clonec)
		return (clones);
	return (NULL);
}
