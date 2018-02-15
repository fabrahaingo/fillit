/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:44:35 by frahaing          #+#    #+#             */
/*   Updated: 2018/01/26 13:44:37 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new;

	new = NULL;
	if (old_size >= new_size)
		return (ptr);
	if (!(new = malloc(new_size)))
	{
		free(ptr);
		return (0);
	}
	ft_memcpy(new, ptr, old_size);
	free(ptr);
	return (new);
}
