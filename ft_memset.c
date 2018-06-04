/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 15:38:51 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:25:25 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction memset() remplit les n premiers octets de la zone mémoire 
pointée par s avec l'octet c.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
