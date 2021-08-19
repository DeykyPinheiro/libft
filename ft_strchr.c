/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:28:16 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:28:18 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*str1;
	size_t			i;

	str1 = (unsigned char *)str;
	i = 0;
	while (str1[i])
	{
		if (str1[i] == (unsigned char)c)
			return ((char *)str1 + i);
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)str1 + i);
	return (0);
}
