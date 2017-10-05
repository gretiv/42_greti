/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 22:04:34 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/24 01:43:58 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *newt;

	i = 0;
	newt = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		newt[i] = (*f)(tab[i]);
		i++;
	}
	return (newt);
}
