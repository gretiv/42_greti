/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 19:52:44 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/18 03:06:39 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}
