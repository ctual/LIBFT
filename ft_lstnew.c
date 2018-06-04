/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:47:48 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:20:01 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne un maillon “frais”. Les
champs content et content_size du nouveau maillon sont
initialisés par copie des paramètres de la fonction. Si le paramètre
content est nul, le champs content est initialisé à
NULL et le champs content_size est initialisé à 0 quelque
soit la valeur du paramètre content_size. Le champ next
est initialisé à NULL. Si l’allocation échoue, la fonction renvoie
NULL.*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = (void *)malloc(content_size)))
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
