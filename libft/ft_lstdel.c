/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:49:54 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/13 20:54:08 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (alst == NULL || !*alst)
		return ;
	tmp = *alst;
	*alst = (*alst)->next;
	del(tmp->content, tmp->content_size);
	free(tmp);
	return (ft_lstdel(alst, del));
}
