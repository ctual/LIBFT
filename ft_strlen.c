/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 20:13:46 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:44:58 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction strlen() calcule la longueur de la chaîne de caractères s, 
sans compter l'octet nul « \0 » final.  */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
