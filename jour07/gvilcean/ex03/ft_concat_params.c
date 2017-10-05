/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 22:26:48 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/21 23:08:13 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int counter;

	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	return (counter);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		total_length;
	char	*c;
	int		j;

	total_length = 0;
	i = 1;
	while (i < argc)
		total_length += ft_strlen(argv[i++]) + 1;
	c = malloc(sizeof(char) * (total_length + 1));
	i = 1;
	total_length = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			c[total_length++] = argv[i][j];
			j++;
		}
		c[total_length++] = '\n';
		i++;
	}
	c[total_length] = '\0';
	return (c);
}
