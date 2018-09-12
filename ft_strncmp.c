/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:00:16 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:58:37 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction strncmp() est identique a strcmp sauf qu'elle ne compare que
** les n (au plus) premiers caractères de s1 et s2.
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t		i;

	i = 0;
	if (len == 0)
		return (0);
	while (i < (len - 1) && s1[i] == s2[i] && s1[i] != '\0' && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
