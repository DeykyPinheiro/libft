/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:28:11 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:28:12 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_len_words(char const *str, char delimiter)
{
	size_t	i;

	i = 0;
	while (str[i] != delimiter && str[i])
		i++;
	return (i);
}

static size_t	ft_count_n_words(char const *str, char delimiter)
{
	size_t	i;
	size_t	words;

	i = 1;
	words = 0;
	if (!*str)
		return (0);
	while (str[i])
	{
		if (str[i] != delimiter && str[i])
		{
			words++;
			while (str[i] != delimiter && str[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	n_words;
	size_t	n_letters;
	size_t	i;

	if (!s)
		return (0);
	n_words = ft_count_n_words(s, c);
	matrix = (char **)malloc((n_words + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < n_words)
	{
		while (*s && *s == c)
			s++;
		n_letters = ft_count_len_words(s, c);
		matrix[i] = ft_substr(s, 0, n_letters);
		s += n_letters + 1;
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}
