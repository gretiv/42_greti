/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:36:52 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/20 16:28:47 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "\001";
	char b[] = "\200";

	printf("%d / %d", ft_strcmp(a,b), strcmp(a,b));
		return 0 ;
}
