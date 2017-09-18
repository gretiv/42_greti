/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:20:01 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/18 19:12:59 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int main()
{
	char v[] = "hello";
	ft_putstr(v);
	return 0;
}
