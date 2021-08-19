/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:28:58 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:28:59 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	size;

	size = ft_strlen(str);
	if (!str)
		return (0);
	while (size)
	{
		if (str[size] == (unsigned char)c)
			return ((char *)str + size);
		size--;
	}
	if (str[size] == (unsigned char)c)
		return ((char *)str + size);
	return (0);
}
