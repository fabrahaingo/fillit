/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dir_there.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 12:48:56 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/29 12:48:57 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_dir_there(char *tab, char **env)
{
	DIR		*opened;
	char	*pathup;

	pathup = ft_strjoin(ft_getenv("PWD", env), "/");
	tab = ft_strjoin(pathup, tab);
	ft_strdel(&pathup);
	if ((opened = opendir(tab)) == NULL)
	{
		free(tab);
		return (0);
	}
	else
	{
		free(tab);
		closedir(opened);
		return (1);
	}
}
