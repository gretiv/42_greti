/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 03:21:06 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/18 03:27:18 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (i <= (nb - 1))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
