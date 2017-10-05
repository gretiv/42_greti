/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 23:06:33 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/26 23:20:42 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *first;
	t_list *tmp;

	first = 0;
	while (*begin_list)
	{
		tmp = (*begin_list)->next;
		(*begin_list)->next = first;
		first = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = first;
}
