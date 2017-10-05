/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:04:22 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/26 21:37:00 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first;

	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		first = ft_create_elem(data);
		first->next = *begin_list;
		*begin_list = first;
	}
}
