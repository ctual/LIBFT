/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 15:57:34 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:56:17 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc(3)) et retourne une copie de la chaine
** passée en paramètre sans les espaces blancs au debut et à la
** fin de cette chaine. On considère comme espaces blancs les
** caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces
** blancs au début ou à la fin, la fonction renvoie une copie de
** s. Si l’allocation echoue, la fonction renvoie NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s)
		return (NULL);
	if (!*s)
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == (ft_strlen(s)))
		return (ft_strdup(""));
	if (!(tmp = ft_strnew((size_t)(len - i + 1))))
		return (0);
	j = 0;
	while (i <= len)
		tmp[j++] = s[i++];
	tmp[j] = '\0';
	return (tmp);
}
