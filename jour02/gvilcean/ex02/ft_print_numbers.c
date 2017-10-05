/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 00:35:29 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/14 20:23:36 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char i);

void	ft_print_numbers(void)
{
	int numbers;

	numbers = 0;
	while (numbers <= 9)
	{
		ft_putchar('0' + numbers);
		numbers++;
	}
}
