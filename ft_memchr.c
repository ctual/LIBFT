/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 16:56:17 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:22:22 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction memchr() examine les n premiers octets de la zone mémoire pointée 
par s à la recherche du caractère c. Le premier octet correspondant à c 
(interprété comme un unsigned char) arrête l'opération.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < len)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
