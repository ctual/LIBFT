/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 16:03:55 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:23:56 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction memcpy() copie n octets depuis la zone mémoire src vers 
la zone mémoire dest. Les deux zones ne doivent pas se chevaucher. 
Si c'est le cas, utilisez plutôt memmove(3).*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dest);
}
