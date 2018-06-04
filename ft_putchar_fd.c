/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:56:04 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:26:18 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ecrit le caractère c sur le descripteur de fichier fd.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
