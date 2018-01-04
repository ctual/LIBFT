/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:37:12 by chtual            #+#    #+#             */
/*   Updated: 2018/01/04 17:35:06 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
