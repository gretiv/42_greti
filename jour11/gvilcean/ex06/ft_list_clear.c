/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 22:03:36 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/26 22:40:45 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *next;
	t_list *current;

	current = *begin_list;
	while (current != 0)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*begin_list = 0;
}
