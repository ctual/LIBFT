/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:31:07 by chtual            #+#    #+#             */
/*   Updated: 2017/12/04 18:49:55 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		range;
	int		*tab;
	int		j;

	j = 0;
	range = max - min;
	if (range <= 0)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * range);
	while (min < max)
	{
		tab[j] = min;
		j++;
		min++;
	}
	return (tab);
}
