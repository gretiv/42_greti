/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 20:18:57 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/19 21:02:27 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_characters(char str)
{
	if (str == ' ')
		return (1);
	if (str == '\t')
		return (1);
	if (str == '\n')
		return (1);
	if (str == '\v')
		return (1);
	if (str == '\f')
		return (1);
	if (str == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int negative;

	i = 0;
	negative = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (ft_characters(*str) == 1)
	{
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		i = (i * 10) + (*str - '0');
		str++;
	}
	return (i * negative);
}
