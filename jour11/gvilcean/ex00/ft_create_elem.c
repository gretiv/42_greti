/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 20:22:17 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/26 22:30:13 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = (t_list*)(malloc(sizeof(t_list)));
	if (tmp != 0)
	{
		tmp->next = 0;
		tmp->data = data;
	}
	return (tmp);
}
