/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 11:55:11 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:09:28 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa2(int n, char *nbr, int sign, int l)
{
	int		i;

	i = 19;
	nbr[i] = '\0';
	if (n == 0)
	{
		i--;
		nbr[i] = '0';
	}
	while (n != 0)
	{
		nbr[--i] = '0' + (n % 10);
		n = n / 10;
	}
	if (sign < 0)
		nbr[--i] = '-';
	if (l == 1)
		nbr[18] = '8';
	return (&nbr[i]);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		sign;
	int		l;

	l = 0;
	sign = (n < 0) ? -1 : 1;
	if (n == -2147483648)
	{
		l = 1;
		n++;
	}
	if (n < 0)
		n = n * -1;
	nbr = (char*)malloc(sizeof(char) * 20);
	if (!nbr)
		return (NULL);
	nbr = ft_itoa2(n, nbr, sign, l);
	return (nbr);
}
