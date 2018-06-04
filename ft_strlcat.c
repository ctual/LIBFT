/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 17:26:34 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:44:35 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction strcat () ajoute la chaîne terminée par NULL src à la fin de dst. 
Il ajoutera au plus size - strlen (dst) - 1 octets, terminant le résultat par 
NULL.*/

#include "libft.h"

size_t		ft_strlcat(char *dst, char const *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		len;

	d = dst;
	s = src;
	n = size;
	while (*d != '\0' && n-- != 0)
		d++;
	len = (unsigned long)d - (unsigned long)dst;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (len + ((unsigned long)s - (unsigned long)src));
}
