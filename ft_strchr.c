/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:25:49 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:35:30 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction strchr() renvoie un pointeur sur la première occurrence du 
caractère c dans la chaîne s.*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)str;
	while (*buf != c)
	{
		if (*buf == '\0')
			return (NULL);
		buf++;
	}
	return (buf);
}
