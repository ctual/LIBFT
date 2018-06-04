/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:53:01 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:24:46 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prend en paramètre l’adresse d’un pointeur dont la zone pointée
doit être libérée avec free(3), puis le pointeur est mis à
NULL.*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (*ap == 0)
		return ;
	free(*ap);
	*ap = 0;
}
