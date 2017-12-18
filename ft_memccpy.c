/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 16:20:50 by chtual            #+#    #+#             */
/*   Updated: 2017/12/12 16:29:27 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = (char *)dest;
	ptr2 = (char *)src;
	while (i < len)
	{
		*ptr = *ptr2;
		if (*ptr2 == c)
			return (dest + 1);
		ptr++;
		src++;
		i++;
	}
	return (NULL);
}
