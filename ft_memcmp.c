/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 17:03:55 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:36:14 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction memcmp() compare les n premiers octets des zones mémoire s1 et
** s2. Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est
** respectivement inférieure, égale ou supérieur à s2.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = 0;
	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (ptr[i] != ptr2[i])
			return (ptr[i] - ptr2[i]);
		i++;
	}
	return (0);
}
