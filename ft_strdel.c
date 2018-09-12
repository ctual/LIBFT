/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:09:53 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:42:11 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en paramètre l’adresse d’une chaine de caractères qui
** doit être libérée avec free(3) et son pointeur mis à NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as == NULL)
		return ;
	ft_memdel((void **)as);
}
