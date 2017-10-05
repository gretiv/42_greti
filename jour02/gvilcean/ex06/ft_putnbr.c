/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 17:32:48 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/14 19:08:55 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr	(int nb)
{
	int rev=0;
	//int ;

	while (nb != 0)
	{
		rev=rev*10 + nb%10;
		nb=nb/10;	;
	}


}
int main()
{
	ft_putnbr(54);
	return 0;
}