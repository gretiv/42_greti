/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 22:04:15 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/18 22:41:56 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while(*src <= n)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return dest;
}
int main()
{
	char *b;
	char v[] = "hello";
	char a[] = "what";
	b = ft_strncpy(a,v,3);
	printf("%s",b);
	return 0;
}

