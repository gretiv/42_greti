/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:45:58 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/20 00:24:46 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i && *(s1 + i) == *(s2 + i) &&
			*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		i++;
	}
	if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
		return (-*(s2 + i));
	if ((*s2 + i) == '\0' && *(s1 + i) != '\0')
		return (*(s1 + i));
	if (*(s1 + i) > *(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	if (*(s1 + i) < *(s2 + i))
		return (-*(s2 + i) - *(s2 + i));
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "\001";
	char b[] = "\200";

	printf("%d : %d \n", ft_strncmp(a, b, 2), strncmp(a, b, 2));
}
