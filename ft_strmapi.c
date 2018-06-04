/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:06:35 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:45:54 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applique la fonction f à chaque caractère de la chaine de
caractères passée en paramètre en précisant son index pour
créer une nouvelle chaine “fraiche” (avec malloc(3)) résultant
des applications successives de f.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strnew;
	int		i;

	i = 0;
	if (s == NULL)
		return (0);
	if (!(strnew = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (s[i])
	{
		strnew[i] = f(i, s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
