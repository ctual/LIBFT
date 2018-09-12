/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:04:37 by chtual            #+#    #+#             */
/*   Updated: 2018/06/05 16:38:43 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ecrit la chaine s sur le descripteur de fichier fd suivi d’un ’\n’.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		i;

	i = ft_strlen(s);
	write(fd, s, i);
	write(fd, "\n", 1);
}
