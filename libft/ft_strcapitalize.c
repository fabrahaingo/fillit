/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:59:40 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/14 22:39:05 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ' ';
		i++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				str[i] = str[i] - 32;
			j = i + 1;
			while (str[j] >= 'a' && str[j] <= 'z')
			{
				i++;
				j++;
			}
		}
		i++;
	}
	return (str);
}
