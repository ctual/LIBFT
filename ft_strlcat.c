/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:21:19 by chtual            #+#    #+#             */
/*   Updated: 2017/12/08 15:25:10 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	dest_len;

	i = 0;
	while (dest[i] != '\0' && i < len)
		i++;
	dest_len = i;
	while (src[i - dest_len] != '\0' && i < len - 1)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	if (i < len)
		dest[i] = '\0';
	return (dest_len + ft_strlen(src));
}
