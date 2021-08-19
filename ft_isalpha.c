/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:40:30 by demikael          #+#    #+#             */
/*   Updated: 2021/07/28 19:40:32 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief check if the character passed is alphabetic.
 * @param c This is the character to be checked.
 * @return This function returns non-zero value if c is
 *  an alphabet, else it returns 0.
*/
int	ft_isalpha(int c )
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
