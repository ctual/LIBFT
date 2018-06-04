/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:08:09 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:39:20 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction strcpy() copie la chaîne pointée par src 
(y compris l'octet nul « \0 » final) dans la chaîne pointée par dest. 
Les deux chaînes ne doivent pas se chevaucher. 
La chaîne dest doit être assez grande pour accueillir la copie.*/

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
