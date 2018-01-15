/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:42:43 by chtual            #+#    #+#             */
/*   Updated: 2018/01/15 18:06:36 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*head;
	t_list		*nl;

	if (!lst)
		return (0);
	if (!(nl = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	nl = f(lst);
	head = nl;
	lst = lst->next;
	while (lst)
	{
		nl->next = f(lst);
		nl = nl->next;
		lst = lst->next;
	}
	return (head);
}
