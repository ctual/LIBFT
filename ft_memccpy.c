/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 16:20:50 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 17:01:07 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction memccpy() copie au plus n octets de la zone mémoire src vers la
** zone mémoire dest, s'arrêtant dès qu'elle rencontre le caractère c.
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = 0;
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (i < len)
	{
		ptr[i] = ptr2[i];
		if (ptr2[i] == (unsigned char)c)
			return (&ptr[i + 1]);
		i++;
	}
	return (0);
}
