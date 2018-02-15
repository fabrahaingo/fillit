/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <frahaing@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 22:50:32 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/05 22:50:34 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	while (needle[len])
		len++;
	if (len == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[j] == haystack[i])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (((char*)haystack) + i - len);
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}
