/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:47:13 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:58:06 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction strrchr() renvoie un pointeur sur la dernière occurrence
** du caractère c dans la chaîne s.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*buf;

	buf = (char *)str + ft_strlen(str);
	while (*buf != c)
	{
		if (buf == str)
			return (NULL);
		buf--;
	}
	return (buf);
}
