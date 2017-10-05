/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 01:30:28 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/14 20:50:04 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char i);

void	ft_help_me(int a, int b, int c)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar('0' + c);
	if (a != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = a + 1;
	c = a + 2;
	while (a < 7)
	{
		if (c > 9)
		{
			b = b + 1;
			c = b + 1;
		}
		if (b > 8)
		{
			a = a + 1;
			b = a + 1;
			c = b + 1;
		}
		ft_help_me(a, b, c);
		c++;
	}
}
