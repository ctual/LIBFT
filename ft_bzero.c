/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 15:53:11 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 17:01:12 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction bzero() met à 0 (octets contenant « \0 ») les n premiers octets
** du bloc pointé par s.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < len)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}
