/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 19:51:38 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/26 22:00:00 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*first;
	t_list	*last;
	int		i;

	if (ac == 1)
		return (0);
	i = ac - 2;
	first = ft_create_elem(av[ac - 1]);
	while (i > 0)
	{
		last = first;
		while (last->next)
		{
			last = last->next;
		}
		last->next = ft_create_elem(av[i]);
		i--;
	}
	return (first);
}
