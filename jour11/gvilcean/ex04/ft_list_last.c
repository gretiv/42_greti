/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 19:29:01 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/26 20:59:09 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_last)
{
	if (begin_last == 0)
	{
		return (0);
	}
	else
	{
		while (begin_last->next != 0)
		{
			begin_last = begin_last->next;
		}
		return (begin_last);
	}
	return (0);
}
