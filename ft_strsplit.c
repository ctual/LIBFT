/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtual <chtual@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:27:03 by chtual            #+#    #+#             */
/*   Updated: 2018/04/26 00:59:17 by chtual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne un tableau de chaines de
caractères “fraiches” (toutes terminées par un ’\0’, le tableau
également donc) résultant de la découpe de s selon le caractère
c. Si l’allocation echoue, la fonction retourne NULL. Exemple :
ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
le tableau ["salut", "les", "etudiants"].*/

#include "libft.h"

static char		**ft_alloc_table(char **table, const char *s, char c)
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
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	if (!(table = (char **)ft_memalloc(sizeof(char *) * (words + 1))))
		return (0);
	return (table);
}

static char		**ft_alloc_words(char **table, const char *s, char c)
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
		i++;
		if (s[i] == c || !s[i])
		{
			if (!(table[j] = ft_strnew(letter + 1)))
				return (0);
			letter = 0;
			j++;
			while (s[i] == c)
				i++;
		}
		letter++;
	}
	return (table);
}

static char		**ft_fill(char **table, const char *s, char c)
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
		if (s[i] == c || !s[i])
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

	if (!s)
		return (NULL);
	table = 0;
	if (!(table = ft_alloc_table(table, s, c)))
		return (0);
	if (!(table = ft_alloc_words(table, s, c)))
		return (0);
	table = ft_fill(table, s, c);
	return (table);
}
