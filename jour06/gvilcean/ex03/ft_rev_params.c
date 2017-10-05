/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 19:12:44 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/20 19:54:14 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	if (argc < 0)
		return (0);
	while (i >= 1)
	{
		ft_printstr(argv[i]);
		i--;
	}
	return (0);
}
