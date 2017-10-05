/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 21:02:55 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/21 23:10:39 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long long	range;
	long long	counter;
	int			*c;

	counter = 0;
	range = max - min;
	if (min >= max)
		return (0);
	c = malloc(sizeof(int) * range);
	while (counter < range)
	{
		c[counter] = min;
		min++;
		counter++;
	}
	return (c);
}
