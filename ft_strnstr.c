/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:28:55 by demikael          #+#    #+#             */
/*   Updated: 2021/08/14 22:28:56 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_i;
	size_t	i;

	big_i = 0;
	if (!*little || !little)
		return ((char *)big);
	while (big_i < len && big[big_i])
	{
		little_i = 0;
		while (big[big_i + little_i] == little[little_i]
			&& (big_i + little_i) < len)
		{
			i = big_i;
			if (little_i + 1 == ft_strlen(little))
				return ((char *)big + i);
			little_i++;
		}
		big_i++;
	}
	return (0);
}
