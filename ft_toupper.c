/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:07:07 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:56:48 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** toupper() convertit la lettre c en majuscule si c'est possible.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 97 & c <= 122)
		c = c - 32;
	return (c);
}
