/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:00:47 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:54:24 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc(3)) et retourne une chaine de caractère
** “fraiche” terminée par un ’\0’. Chaque caractère de la chaine
** est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie
** NULL.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
