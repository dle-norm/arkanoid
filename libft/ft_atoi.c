/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:05:06 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:07:52 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi2(const char *str, int i, int n, int val)
{
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			val = (val * 10) + (str[i] - 48);
		else
		{
			if (!n)
				return (-val);
			return (val);
		}
		i++;
	}
	if (!n)
		return (-val);
	return (val);
}

int		ft_atoi(const char *str)
{
	int val;
	int i;
	int n;

	val = 0;
	n = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i - 1] == '-')
		n = 0;
	val = ft_atoi2(str, i, n, val);
	return (val);
}
