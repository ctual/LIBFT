/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:57:04 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:15:03 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*vérifie s'il s'agit d'un caractère imprimable, y compris l'espace.*/

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 & c < 127)
		return (1);
	else
		return (0);
}
