/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 20:31:16 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/26 22:46:45 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last;

	last = *begin_list;
	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		while (last->next != 0)
		{
			last = last->next;
		}
		last->next = ft_create_elem(data);
	}
}
