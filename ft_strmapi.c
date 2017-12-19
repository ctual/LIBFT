/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:06:35 by chtual            #+#    #+#             */
/*   Updated: 2017/12/19 19:16:32 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strnew;
	int		i;

	if (!(strnew = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		strnew[i] = f(i, s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
