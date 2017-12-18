/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:46:36 by chtual            #+#    #+#             */
/*   Updated: 2017/12/06 16:10:35 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		negative;
	int		res;
	int		i;

	negative = 0;
	res = 0;
	i = 0;
	while (str[i] >= 9 & str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while ((str[i] >= 48 & str[i] <= 57))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-res);
	else
		return (res);
}
