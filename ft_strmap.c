/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 17:23:33 by chtual            #+#    #+#             */
/*   Updated: 2017/12/19 19:15:04 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		strnew[i] = f(s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
