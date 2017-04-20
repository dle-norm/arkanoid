/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 17:40:57 by dle-norm          #+#    #+#             */
/*   Updated: 2015/05/03 21:25:00 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grosheader.h"

void	map_level2(t_env d, t_alst *tmp)
{
	if (ft_atoi(tmp->data[d.i]) == 0)
		draw(0.0f, 0.0f, d.x, d.y);
	else if (ft_atoi(tmp->data[d.i]) == 1)
		draw(1.0f, 0.0f, d.x, d.y);
	else if (ft_atoi(tmp->data[d.i]) == 2)
		draw(0.0f, 1.0f, d.x, d.y);
	else if (ft_atoi(tmp->data[d.i]) == 3)
		draw(1.0f, 1.0f, d.x, d.y);
	else if (ft_atoi(tmp->data[d.i]) == 4)
		draw(0.2f, 0.7f, d.x, d.y);
	else if (ft_atoi(tmp->data[d.i]) == 5)
		draw(0.7f, 0.2f, d.x, d.y);
}

void	map_level(t_env d, t_alst *lvl)
{
	t_alst	*tmp;

	tmp = lvl;
	d.y = 0.8;
	while (tmp->next != NULL)
	{
		d.x = -0.5;
		d.i = 0;
		while (tmp->data[d.i] != '\0')
		{
			map_level2(d, tmp);
			d.i++;
			d.x += 0.05;
		}
		d.y -= 0.02;
		tmp = tmp->next;
	}
}

void	map_arene(void)
{
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, arene());
	glEnableVertexAttribArray(0);
	glColor3f(0.0f, 0.0f, 1.0f);
	glDrawArrays(GL_LINES, 0, 6);
	glDisableVertexAttribArray(0);
}

void	map_raquet(float x)
{
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, raquet(x));
	glEnableVertexAttribArray(0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glDrawArrays(GL_TRIANGLES, 0, 6);
	glDisableVertexAttribArray(0);
}

void	map_ball(t_env d)
{
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, ball(d.x3, d.y3));
	glEnableVertexAttribArray(0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glDrawArrays(GL_TRIANGLES, 0, 6);
	glDisableVertexAttribArray(0);
}
