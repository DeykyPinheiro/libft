/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:40:50 by demikael          #+#    #+#             */
/*   Updated: 2021/08/11 12:33:02 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks whether the passed character is printable.
 * @param c This is the character to be checked.
 * @return This function returns a non-zero value(true)
 *  if c is a printable character else, zero (false).
 */
int	ft_isprint(int c)
{
	return ((c >= 32) && c <= 126);
}
