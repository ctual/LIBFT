/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 16:03:55 by chtual            #+#    #+#             */
/*   Updated: 2017/12/12 16:29:58 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = (char *)dest;
	ptr2 = (char *)src;
	i = 0;
	while (i < len)
	{
		*ptr = *ptr2;
		ptr++;
		src++;
		i++;
	}
	return (dest);
}
