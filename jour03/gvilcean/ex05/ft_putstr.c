/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 03:10:16 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/16 04:11:21 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char i);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
