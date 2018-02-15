/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dir_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:24:52 by frahaing          #+#    #+#             */
/*   Updated: 2017/12/12 18:53:27 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_dir_count(char *path)
{
	DIR				*opened;
	struct dirent	*rep;
	int				i;

	i = 0;
	opened = opendir(path);
	while ((rep = readdir(opened)))
		i++;
	closedir(opened);
	return (i);
}
