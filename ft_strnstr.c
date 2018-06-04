/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:36:51 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:58:23 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction strnstr () localise la première occurrence de la chaîne substr 
dans la chaîne str, où pas plus de len caractères sont recherchés. 
Les caractères qui apparaissent après un caractère `\ 0 'ne sont pas 
recherchés.*/

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
