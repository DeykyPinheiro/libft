/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:29:11 by demikael          #+#    #+#             */
/*   Updated: 2021/09/06 16:43:41 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	else if (start + len > s_len)
		len = s_len - start;
	substring = ft_calloc(sizeof(char), (len + 1));
	if (!substring)
		return (0);
	ft_strlcpy(substring, &s[start], len + 1);
	return (substring);
}

// int	main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char *sub;
// 	sub = ft_substr(str, 7, 10);
// 	printf("%s\n", sub);

// }

// parametros, string, onde comecar, tamanho maximo da substring
//-[x] retorna uma substring. NULL se a alocação falhar.
//-[x] usar malloc
