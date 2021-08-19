/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:28:35 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:28:35 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i_dst;
	size_t	i_src;
	size_t	i;

	if (!dst && !src)
		return (0);
	i_dst = 0;
	i_src = ft_strlen(src);
	i = 0;
	while (dst[i_dst] && i_dst < size)
		i_dst++;
	if (i_dst >= size)
		return (i_dst + i_src);
	while (src[i] && (i_dst + i) < size - 1)
	{
		dst[i_dst + i] = src[i];
		i++;
	}
	dst[i_dst + i] = 0;
	return (i_dst + i_src);
}
