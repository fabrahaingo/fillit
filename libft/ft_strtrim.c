/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:17:11 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/14 17:18:23 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	i = 0;
	if (s == NULL || ft_strlen(s) == 0)
		return ((char*)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s[i])
		return (ft_strnew(0));
	start = i;
	while (s[i])
		i++;
	end = i;
	i = i - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	end = i + 1;
	str = ft_strsub(s, start, end - start);
	return ((char*)str);
}
