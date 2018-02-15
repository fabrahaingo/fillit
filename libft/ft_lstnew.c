/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:47:52 by frahaing          #+#    #+#             */
/*   Updated: 2017/12/13 17:52:32 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *init;

	init = (t_list*)malloc(sizeof(t_list));
	if (init == NULL)
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		init->content = NULL;
		init->content_size = 0;
		init->next = NULL;
		return (init);
	}
	init->content = (void*)malloc(sizeof(content));
	if (init->content == NULL)
		return (NULL);
	ft_memcpy(init->content, content, content_size);
	init->content_size = content_size;
	init->next = NULL;
	return (init);
}
