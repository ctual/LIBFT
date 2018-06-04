/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 20:07:00 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:17:42 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prend en paramètre l’adresse d’un pointeur sur un maillon et
libère la mémoire de ce maillon et celle de tous ses successeurs
l’un après l’autre avec del et free(3). Pour terminer,
le pointeur sur le premier maillon maintenant libéré doit être
mis à NULL (de manière similaire à la fonction ft_memdel de
la partie obligatoire).*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*list;
	t_list		*tmp;

	list = *alst;
	while (list)
	{
		tmp = list->next;
		del(list, list->content_size);
		list = tmp;
	}
	*alst = NULL;
}
