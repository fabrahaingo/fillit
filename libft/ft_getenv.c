/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:35:36 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/25 20:35:40 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getenv(char *name, char **env)
{
	int		i;
	int		j;
	char	*value;

	i = 0;
	j = 0;
	value = NULL;
	while (env[i])
	{
		if (!ft_strncmp(env[i], name, ft_strlen(name) - 1))
			break ;
		i++;
	}
	if (!env[i])
		return (NULL);
	while (env[i][j] != '=')
		j++;
	return (env[i] + j + 1);
}
