/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:24:28 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:58:53 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de
** caractères qui est dupliquée depuis s. La mémoire occupée par cette nouvelle
** chaîne est obtenue en appelant malloc(3), et peut (doit) donc être libérée
** avec free(3).
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
