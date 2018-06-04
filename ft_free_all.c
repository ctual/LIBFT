/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:16:32 by chtual            #+#    #+#             */
/*   Updated: 2018/03/13 18:20:57 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_all(void **tmp)
{
	size_t	i;

	i = 0;
	if (!tmp)
		return ;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
	return ;
}
