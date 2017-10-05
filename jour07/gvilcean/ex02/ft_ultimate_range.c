/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 21:41:36 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/21 23:10:51 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long long	counter;
	long long	interval;

	counter = 0;
	interval = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * interval);
	while (counter < interval)
	{
		(*range)[counter] = min;
		min++;
		counter++;
	}
	return (counter);
}
