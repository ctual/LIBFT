/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:57:04 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:31:11 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie s'il s'agit d'un caractère imprimable, y compris l'espace.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 & c < 127)
		return (1);
	else
		return (0);
}
