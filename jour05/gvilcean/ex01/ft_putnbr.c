/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:21:39 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/18 20:16:24 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(int c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_putnbr(int nb)
{
	int rev;

	rev = 0;
	while(nb != 0)
	{
		rev = rev * 10 + nb / 10;
		nb = nb / 10;
	}
}

int main()
{
	ft_putnbr(54);
	return 0;
}
