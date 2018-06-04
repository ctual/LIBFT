/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:34:31 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:19:11 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parcourt la liste lst en appliquant à chaque maillon la fonction f.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
