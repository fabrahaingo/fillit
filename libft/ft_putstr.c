/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 23:12:16 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/11 17:57:07 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int len;

	len = 0;
	if (str == NULL)
		return ;
	while (str[len])
	{
		ft_putchar(str[len]);
		len++;
	}
}
