/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 16:45:49 by dle-norm          #+#    #+#             */
/*   Updated: 2015/05/03 17:24:52 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grosheader.h"

float	*brick(float x, float y)
{
	float *bric;

	bric = (float *)malloc(sizeof(float) * 11);
	bric[0] = x;
	bric[1] = y;
	bric[2] = x + 0.05;
	bric[3] = y;
	bric[4] = x;
	bric[5] = y + 0.02;
	bric[6] = x + 0.05;
	bric[7] = y + 0.02;
	bric[8] = x + 0.05;
	bric[9] = y;
	bric[10] = x;
	bric[11] = y + 0.02;
	return (bric);
}

float	*arene(void)
{
	float	*arene;

	arene = (float *)malloc(sizeof(float) * 11);
	arene[0] = -0.51;
	arene[1] = 0.83;
	arene[2] = 0.51;
	arene[3] = 0.83;
	arene[4] = -0.51;
	arene[5] = 0.83;
	arene[6] = -0.51;
	arene[7] = -0.83;
	arene[8] = 0.51;
	arene[9] = 0.83;
	arene[10] = 0.51;
	arene[11] = -0.83;
	return (arene);
}

float	*raquet(float x)
{
	float *raquet;

	raquet = (float *)malloc(sizeof(float) * 11);
	raquet[0] = x;
	raquet[1] = -0.7;
	raquet[2] = x + 0.1;
	raquet[3] = -0.7;
	raquet[4] = x;
	raquet[5] = -0.72;
	raquet[6] = x + 0.1;
	raquet[7] = -0.72;
	raquet[8] = x + 0.1;
	raquet[9] = -0.7;
	raquet[10] = x;
	raquet[11] = -0.72;
	return (raquet);
}

float	*ball(float x, float y)
{
	float	*ball;

	ball = (float *)malloc(sizeof(float) * 11);
	ball[0] = x;
	ball[1] = y;
	ball[2] = x + 0.01;
	ball[3] = y;
	ball[4] = x;
	ball[5] = y + 0.01;
	ball[6] = x + 0.01;
	ball[7] = y + 0.01;
	ball[8] = x - 0.01;
	ball[9] = y;
	ball[10] = x;
	ball[11] = y + 0.01;
	return (ball);
}
