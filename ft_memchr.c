/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:27:11 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:27:12 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;

	str1 = (unsigned char *)str;
	while (n--)
	{
		if (*str1 == (unsigned char)c)
			return (str1);
		str1++;
	}
	return (0);
}
