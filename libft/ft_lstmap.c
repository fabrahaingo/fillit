/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:57:08 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/13 20:48:11 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = (t_list*)malloc(sizeof(t_list));
	tmp = f(lst);
	if (lst->next != NULL)
		tmp->next = ft_lstmap(lst->next, *f);
	return (tmp);
}
