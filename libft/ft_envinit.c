/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_envinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 16:46:28 by frahaing          #+#    #+#             */
/*   Updated: 2018/02/09 16:46:31 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_envinit(char **envp)
{
	char	**res;
	size_t	i;
	size_t	len;

	len = ft_tablen(envp, sizeof(char *));
	if ((res = malloc(sizeof(char *) * (len + 1))) == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = ft_strdup(envp[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
