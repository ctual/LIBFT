/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:00:10 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:39:57 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ecrit la chaine s sur le descripteur de fichier fd.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;

	i = ft_strlen(s);
	write(fd, s, i);
}
