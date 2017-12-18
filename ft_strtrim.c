/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 15:57:34 by chtual            #+#    #+#             */
/*   Updated: 2017/12/13 16:26:42 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		end;

	i = 0;
	if (s[i] == '\0')
		return (NULL);
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	end = ft_strlen(s) - 1;
	while (s[end] != ' ' || s[end] != ',' || s[end] != '\n' || s[end] != '\t')
		end--;
	str = (char *)malloc(sizeof(char) * (end - i));
	while (i < end)
	{
		*str = s[i];
		str++;
		i++;
	}
	*str = '\0';
	return (str);
}
