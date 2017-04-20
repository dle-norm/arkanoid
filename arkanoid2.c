/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arkanoid2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cost <mda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 18:06:35 by mda-cost          #+#    #+#             */
/*   Updated: 2015/05/03 20:46:18 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grosheader.h"

void	draw(float r, float g, float x, float y)
{
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, brick(x, y));
	glEnableVertexAttribArray(0);
	glColor3f(r, g, 0.0f);
	glDrawArrays(GL_TRIANGLES, 0, 6);
	glDisableVertexAttribArray(0);
}

void	move(t_env *d, GLFWwindow *window)
{
	if (glfwGetKey(window, GLFW_KEY_LEFT))
	{
		if (d->x2 > -0.5)
			d->x2 -= 0.005;
	}
	else if (glfwGetKey(window, GLFW_KEY_RIGHT))
	{
		if (d->x2 < 0.4)
			d->x2 += 0.005;
	}
}

void	vitesse3(t_env *d)
{
	if (d->y3 > 0.8)
	{
		d->k *= -1;
		d->x3 += d->j;
		d->y3 += d->k;
	}
	else
	{
		d->x3 += d->j;
		d->y3 += d->k;
	}
}

void	vitesse2(t_env *d)
{
	if ((d->x3 > d->x2 + 0.06 && d->x3 <= d->x2 + 0.1) &&
		(d->y3 <= -0.7 && d->y3 >= -0.72))
	{
		d->k *= -1;
		d->j = 0.01;
		d->x3 += d->j;
		d->y3 += d->k;
	}
	else if ((d->x3 >= d->x2 && d->x3 < d->x2 + 0.04) &&
		(d->y3 <= -0.7 && d->y3 >= -0.72))
	{
		d->k *= -1;
		d->j = -0.01;
		d->x3 += d->j;
		d->y3 += d->k;
	}
	else
		vitesse3(d);
}

void	vitesse(t_env *d)
{
	if (d->x3 < -0.50)
	{
		d->j *= -1;
		d->x3 += d->j;
		d->y3 += d->k;
	}
	else if (d->x3 > 0.5)
	{
		d->j *= -1;
		d->x3 += d->j;
		d->y3 += d->k;
	}
	else if (d->x3 >= d->x2 + 0.04 && d->x3 <= d->x2 + 0.06 &&
		d->y3 <= -0.7 && d->y3 >= -0.72)
	{
		d->k *= -1;
		d->j = 0.005;
		d->x3 += d->j;
		d->y3 += d->k;
	}
	else
		vitesse2(d);
}
