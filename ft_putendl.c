/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 20:47:29 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:26:58 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Affiche la chaine s sur la sortie standard suivi d’un ’\n’.*/

#include "libft.h"

void	ft_putendl(char const *str)
{
	int		i;

	i = ft_strlen(str);
	write(1, str, i);
	write(1, "\n", 1);
}
