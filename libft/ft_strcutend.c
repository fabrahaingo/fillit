/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcutend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 00:09:22 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/19 00:09:25 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcutend(char *str, int c)
{
	int		i;
	int		j;
	char	*result;

	i = ft_strlen(str) - c;
	j = 0;
	result = (char *)malloc(sizeof(char) * i + 1);
	while (j < i)
	{
		result[j] = str[j];
		j++;
	}
	free(str);
	result[j] = '\0';
	return (result);
}
