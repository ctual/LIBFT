/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 15:57:34 by chtual            #+#    #+#             */
/*   Updated: 2017/12/19 20:00:54 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	if (!*s)
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == (ft_strlen(s)))
		return (ft_strdup(""));
	if (!(tmp = ft_strnew((size_t)(len - i + 1))))
		return (0);
	j = 0;
	while (i <= len)
		tmp[j++] = s[i++];
	tmp[j] = '\0';
	return (tmp);
}
