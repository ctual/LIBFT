/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 17:23:33 by chtual            #+#    #+#             */
/*   Updated: 2017/12/12 18:05:21 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*strnew;
	int		i;

	strnew = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		strnew[i] = f(s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
