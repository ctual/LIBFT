/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:09:59 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:57:28 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction strstr() cherche la première occurrence de la sous-chaîne
** aiguille au sein de la chaîne meule_de_foin. Les caractères « \0 » de fin
** ne sont pas comparés.
*/

#include "libft.h"

char	*ft_strstr(const char *str, const char *substr)
{
	int		i;
	int		j;

	i = 0;
	if (substr[0] == '\0')
		return ((char *)str);
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
