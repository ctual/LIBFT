/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:23:21 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:30:58 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie si l'on a un chiffre (0 à 9).
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c >= 48 & c <= 57)
		return (1);
	else
		return (0);
}
