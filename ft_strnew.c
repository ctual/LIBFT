/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:00:47 by chtual            #+#    #+#             */
/*   Updated: 2017/12/18 17:52:39 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*str;
	size_t		i;

	i = 0;
	if (size == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
