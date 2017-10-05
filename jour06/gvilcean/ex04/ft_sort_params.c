/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 19:55:47 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/20 22:07:29 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		i++;
	}
	if ((*(s1 + i) == '\0') && (*(s2 + i) != '\0'))
		return (-*(s2 + i));
	if ((*(s2 + i) == '\0') && (*s1 + i) != '\0')
		return (*(s1 + i));
	if (*(s1 + i) > *(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	if (*(s1 + i) < *(s2 + i))
		return (-(*(s2 + i) - *(s1 + i)));
	return (0);
}

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
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
		ft_printstr(argv[i++]);
	return (0);
}
