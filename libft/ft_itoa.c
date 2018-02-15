/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:23:17 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/14 14:42:43 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length(int n)
{
	int i;

	i = 0;
	while (n <= -1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*ft_create_string(char *str, int n, int sign, int i)
{
	while (n <= -1)
	{
		str[i] = -(n % 10) + '0';
		i--;
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;

	i = 1;
	sign = -1;
	if (n > 0)
	{
		n = -n;
		sign = 1;
		i--;
	}
	if (n == 0)
	{
		if ((str = (char*)malloc(sizeof(char) * 2)) == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	i = i + ft_length(n);
	if ((str = (char*)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	str[i] = '\0';
	return (ft_create_string(str, n, sign, i - 1));
}
