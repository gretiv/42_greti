/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 22:42:15 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/26 23:04:09 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	nelem;
	t_list			*elem;

	nelem = 1;
	elem = begin_list;
	if (begin_list == 0)
	{
		return (0);
	}
	while (elem->next && nelem <= nbr)
	{
		elem = elem->next;
		nelem++;
	}
	if (nelem != nbr)
		return (0);
	return (elem);
}
