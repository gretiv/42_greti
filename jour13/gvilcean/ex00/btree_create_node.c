/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 19:40:23 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/28 21:18:37 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *new;

	new = (t_btree*)malloc(sizeof(t_btree*));
	if (new)
	{
		new->item = item;
		new->left = 0;
		new->right = 0;
	}
	return (new);
}
