/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:02:07 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/12 16:16:41 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		scan;

	i = 0;
	j = 0;
	scan = 0;
	while (needle[scan])
		scan++;
	if (scan == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[j] == haystack[i] && i < (int)len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (((char*)haystack) + i - scan);
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}
