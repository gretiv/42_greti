/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 15:51:11 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/14 20:56:27 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int i);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = a + 1;
	while (a < 98)
	{
		if (b > 99)
		{
			a = a + 1;
			b = a + 1;
		}
		ft_putchar('0' + a / 10);
		ft_putchar('0' + a % 10);
		ft_putchar(' ');
		ft_putchar('0' + b / 10);
		ft_putchar('0' + b % 10);
		b++;
		if (a != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
