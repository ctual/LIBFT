/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 20:17:59 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:17:19 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ajoute l’élément new en tête de la liste.*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
