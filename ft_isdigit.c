/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:40:45 by demikael          #+#    #+#             */
/*   Updated: 2021/07/28 19:40:46 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief checks whether the character passed is
 *  a decimal digit character.
 * @param c This is the character to be checked.
 * @return This function returns a nonzero value
 * if c for a digit, otherwise returns 0.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
