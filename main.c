/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 14:24:07 by dle-norm          #+#    #+#             */
/*   Updated: 2015/05/03 21:24:32 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grosheader.h"

float	casse_bric(t_env d, t_alst *lvl, float i)
{
	t_alst	*temp;

	temp = lvl;
	d.i = 0;
	if ((d.y3 > 0.66 && d.y3 < 0.8) && (d.x3 < 0.4 && d.x3 > -0.5))
	{
		d.k = (d.x3 + 0.5) / 0.05;
		d.j = (d.y3 - 0.8) / 0.02;
		while (d.j++ <= 0)
			temp = temp->next;
		while (d.k >= 0)
		{
			d.k--;
			d.i++;
		}
		if (ft_atoi(temp->data[d.i]) != 0 && ft_atoi(temp->data[d.i]) != 5)
		{
			i *= -1;
			temp->data[d.i][0] = '0';
		}
		if (ft_atoi(temp->data[d.i]) == 5)
			i *= -1;
	}
	return (i);
}

int		ft_error(char *s)
{
	ft_putstr_fd(s, 2);
	return (0);
}

int		ft_help(void)
{
	ft_putstr("\n");
	return (0);
}

int		main(int ac, char **av)
{
	if (!ft_strcmp(av[1], "-help"))
		exit(ft_help());
	init();
	return (0);
}
