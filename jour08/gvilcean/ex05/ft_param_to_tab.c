/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:18:28 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/22 23:30:30 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*duplicate;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	duplicate = malloc(sizeof(char) * (size + 1));
	while (src[i] != '\0')
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*structs;

	structs = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		structs[i].size_param = ft_strlen(av[i]);
		structs[i].str = av[i];
		structs[i].copy = ft_strdup(av[i]);
		structs[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	structs[i].str = 0;
	return (structs);
}
