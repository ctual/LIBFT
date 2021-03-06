/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 20:28:37 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:37:47 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Affiche le caractère c sur la sortie standard.
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
