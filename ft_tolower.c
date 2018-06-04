/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:13:01 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 01:01:32 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*tolower() convertit la lettre c en minuscule si c'est possible.*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 65 & c <= 90)
		c = c + 32;
	return (c);
}
