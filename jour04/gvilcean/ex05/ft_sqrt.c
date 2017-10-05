/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 02:11:40 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/18 03:04:05 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int result;

	i = 1;
	result = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		i++;
	}
	result = i - 1;
	if (result * result == nb)
		return (result);
	else
		return (0);
}
