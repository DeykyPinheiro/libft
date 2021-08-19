/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:29:04 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:29:05 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	first_char_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	return (i);
}

static size_t	first_char_end(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i > 0 )
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strnew;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = first_char_start(s1, set);
	end = first_char_end(&s1[start], set);
	strnew = ft_substr(s1, start, end);
	return (strnew);
}
