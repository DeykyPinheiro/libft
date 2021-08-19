/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:27:29 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:27:30 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst,	const void *src, size_t	len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str2 = (unsigned char *)src;
	str1 = (unsigned char *)dst;
	if (dst > src)
	{
		while (len--)
		{
			str1[len] = str2[len];
		}
		return (dst);
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
}
