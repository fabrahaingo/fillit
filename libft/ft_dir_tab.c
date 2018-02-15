/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dir_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:59:35 by frahaing          #+#    #+#             */
/*   Updated: 2017/12/12 20:04:46 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_dir_tab(char *path)
{
	int				i;
	DIR				*opened;
	struct dirent	*rep;
	char			**names;

	i = ft_dir_count(path);
	names = (char **)malloc(sizeof(char *) * i + 1);
	opened = opendir(path);
	i = 0;
	while ((rep = readdir(opened)))
	{
		names[i] = (char *)malloc(sizeof(char) * ft_strlen(rep->d_name) + 1);
		ft_strcpy(names[i], rep->d_name);
		i++;
	}
	names[i] = NULL;
	closedir(opened);
	return (names);
}
