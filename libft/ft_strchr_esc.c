/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_esc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 14:19:24 by frahaing          #+#    #+#             */
/*   Updated: 2018/02/09 14:19:25 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr_esc(const char *str, char c)
{
	if (str == 0)
		return (0);
	while (*str && *str != c)
	{
		if (*str == '\\' && *(str + 1))
			str++;
		str++;
	}
	if (*str == 0 && c != 0)
		return (0);
	return ((char *)str);
}
