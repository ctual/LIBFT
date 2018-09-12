/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:20:30 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:41:03 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assigne la valeur ’\0’ à tous les caractères de la chaine passée
** en paramètre.
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
