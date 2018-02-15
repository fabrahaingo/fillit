/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:49:38 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/09 14:49:39 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr(-n));
	}
	if (n <= 9)
	{
		ft_putchar(n + 48);
		return ;
	}
	ft_putnbr(n / 10);
	ft_putnbr(n % 10);
	return ;
}
