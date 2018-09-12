/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:05:44 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:45:54 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction ft_strncat() est identique a ft_strcat(), à la différence que
** elle ne prend en compte que les n premiers caractères de src  et
** src n'a pas besoin d'octet nul final si elle contient n caractères ou plus.
*/

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len;
	size_t i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
