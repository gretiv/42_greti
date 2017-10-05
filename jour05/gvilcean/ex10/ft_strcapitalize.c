/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:37:55 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/19 23:36:05 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int s;

	s = 0;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]))
		{
			if (!s && ('a' <= str[i] && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			s = 1;
		}
		else
			s = 0;
		i++;
	}
	return (str);
}
