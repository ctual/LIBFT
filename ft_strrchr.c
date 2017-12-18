/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:47:13 by chtual            #+#    #+#             */
/*   Updated: 2017/12/08 16:00:34 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
