/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:25:49 by chtual            #+#    #+#             */
/*   Updated: 2017/12/15 15:44:46 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
