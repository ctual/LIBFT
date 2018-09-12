/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:37:28 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:47:27 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** n Compare lexicographiquement s1 et s2 jusqu’à n caractères
** maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux
** chaines sont égales, la fonction retourne 1, ou 0 sinon
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0' && s2[i] == '\0') || i >= (len - 1))
			return (1);
		i++;
	}
	return (0);
}
