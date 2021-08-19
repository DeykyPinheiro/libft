/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:40:15 by demikael          #+#    #+#             */
/*   Updated: 2021/07/29 01:47:17 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if the 'character' passed is alphanumeric
 * @param character The character which is to be checked.
 * @return It returns non-zero value, if the character is
 * alphanumeric means letter or number otherwise, returns zero.
 */
int	ft_isalnum(int character)
{
	return (ft_isdigit(character) || ft_isalpha(character));
}
