/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:31:06 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:41:46 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applique la fonction f à chaque caractère de la chaine de
caractères passée en paramètre en précisant son index en premier
argument. Chaque caractère est passé par adresse à la
fonction f afin de pouvoir être modifié si nécéssaire.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s)
		f(i++, s++);
}
