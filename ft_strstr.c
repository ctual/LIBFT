/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:09:59 by chtual            #+#    #+#             */
/*   Updated: 2017/12/19 17:34:46 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *substr)
{
	int		i;
	int		j;

	i = 0;
	if (substr[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == substr[j])
		{
			if (substr[j + 1] == '\0')
				return ((char *)(&str[i]));
			j++;
		}
		i++;
	}
	return (0);
}
