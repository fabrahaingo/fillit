/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:14:51 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/12 16:33:29 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*str;

	i = start;
	j = 0;
	if (s == NULL)
		return ((char*)s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (str);
	while (i < (int)start + (int)len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return ((char*)str);
}
