/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:25:11 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:40:45 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction strcat() ajoute la chaîne src à la fin de la chaîne dest en
** écrasant le caractère nul (« \0 ») à la fin de dest, puis en ajoutant un
** nouveau caractère nul final. Les chaînes ne doivent pas se chevaucher, et
** la chaîne dest doit être assez grande pour accueillir le résultat.
*/

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
