/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:48:52 by demikael          #+#    #+#             */
/*   Updated: 2021/08/17 13:49:44 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		i;

	if (!lst)
		return (0);
	i = 0;
	aux = lst;
	while (aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
