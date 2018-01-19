/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:36:51 by chtual            #+#    #+#             */
/*   Updated: 2018/01/19 16:24:03 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	while (i < n && str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == substr[j] && (i + j) < n && str[i + j])
			j++;
		if (substr[j] == '\0')
			return ((char *)(&str[i]));
		i++;
	}
	return (NULL);
}
