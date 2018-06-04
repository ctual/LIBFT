/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:37:12 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:20:39 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une zone de mémoire
“fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation
échoue, la fonction renvoie NULL.*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char		*mem;

	if (!(mem = (void *)malloc(size)))
		return (0);
	while (size != 0)
	{
		size--;
		mem[size] = '\0';
	}
	return (mem);
}
