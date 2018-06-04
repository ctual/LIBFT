/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 20:31:38 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:31:36 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Affiche la chaine s sur la sortie standard.*/

#include "libft.h"

void	ft_putstr(char const *str)
{
	int		i;

	i = ft_strlen(str);
	write(1, str, i);
}
