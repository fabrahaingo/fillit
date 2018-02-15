/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 19:52:19 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/14 21:03:14 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*tmp;

	i = 0;
	if (begin_list == NULL)
		return (i);
	else
	{
		tmp = begin_list;
		while (tmp->next)
		{
			tmp = tmp->next;
			i++;
		}
		return (i + 1);
	}
}
