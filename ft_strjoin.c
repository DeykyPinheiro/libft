/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:28:30 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:28:31 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str1 = (char *)ft_calloc(size, sizeof(char));
	if (!str1)
		return (0);
	ft_strlcpy(str1, s1, (ft_strlen(s1) + 1));
	ft_strlcat(str1, s2, size);
	return (str1);
}
