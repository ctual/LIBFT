/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:23:30 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:43:16 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f à chaque caractère de la chaine de
** caractères passée en paramètre. Chaque caractère est passé
** par adresse à la fonction f afin de pouvoir être modifié si
** nécéssaire.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (*s)
		f(s++);
}
