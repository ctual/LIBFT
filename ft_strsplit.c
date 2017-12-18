/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:27:03 by chtual            #+#    #+#             */
/*   Updated: 2017/12/15 15:43:28 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_alloc_table(char **table, char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	if (!(table = (char **)ft_memalloc(sizeof(char *) * words + 1)))
		return (NULL);
	return (table);
}

static char		**ft_alloc_words(char **table, char const *s, char c)
{
	int		i;
	int		j;
	int		letter;

	i = 0;
	j = 0;
	letter = 0;
	while (s[i] == c)
		i++;
	while (s[i++] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			letter++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				if (!(table[j] = ft_strnew(letter + 1)))
					return (NULL);
				letter = 0;
				j++;
			}
		}
	}
	return (table);
}

static char		**ft_fill(char **table, char const *s, char c)
{
	int		i;
	int		j;
	int		letter;

	i = 0;
	j = 0;
	letter = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		table[j][letter] = s[i];
		letter++;
		i++;
		if (s[i] == c || s[i] == '\0')
		{
			j++;
			letter = 0;
			while (s[i] == c)
				i++;
		}
	}
	return (table);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**table;

	if (s == NULL)
		return (NULL);
	table = 0;
	if (!(table = ft_alloc_table(table, s, c)))
		return (NULL);
	if (!(table = ft_alloc_words(table, s, c)))
		return (NULL);
	table = ft_fill(table, s, c);
	return (table);
}
