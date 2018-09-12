/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:32:33 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:30:45 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie si c est un char entrant dans le jeu de caractères ASCII.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 & c <= 127)
		return (1);
	else
		return (0);
}
