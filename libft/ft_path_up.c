/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 18:28:44 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/25 18:28:45 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_path_up(char *path)
{
	char	*pathup;
	int		i;
	int		tmp;

	i = 0;
	tmp = 0;
	pathup = NULL;
	if (!ft_letter_there(path, '/'))
		return (pathup);
	while (path[i])
	{
		if (path[i] == '/')
			tmp = i;
		i++;
	}
	if (tmp == 0)
	{
		pathup = ft_strcutend(path, ft_strlen(path) - 1);
		return (pathup);
	}
	i -= tmp;
	pathup = ft_strcutend(path, i);
	return (pathup);
}
