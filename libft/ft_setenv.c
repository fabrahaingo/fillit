/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:21:00 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/26 13:21:01 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_setenv(char *name, char *value, char **env)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	if (!env[i] || !name)
		return ;
	while (env[i])
	{
		if (!ft_strncmp(env[i], name, ft_strlen(name) - 1))
		{
			if (env[i][ft_strlen(name) + 1])
				tmp = ft_strjoin(name, "=");
			else
				tmp = ":";
			free(env[i]);
			env[i] = ft_strjoin(tmp, value);
			free(tmp);
		}
		i++;
	}
}
