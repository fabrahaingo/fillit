/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <frahaing@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 22:32:59 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/05 22:33:01 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*clones;
	char	clonec;
	char	*tmp;

	clones = (char *)s;
	clonec = (char)c;
	tmp = NULL;
	while (*clones)
	{
		if (*clones == clonec)
			tmp = clones;
		clones++;
	}
	if (*clones == clonec)
		tmp = clones;
	return (tmp);
}
