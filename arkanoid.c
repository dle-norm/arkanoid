/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 14:40:40 by dle-norm          #+#    #+#             */
/*   Updated: 2015/05/03 21:28:05 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grosheader.h"

int		next_lvl(t_alst *l)
{
	int		i;
	t_alst	*temp;

	temp = l;
	while (temp->next != NULL)
	{
		i = 0;
		while (temp->data[i] != '\0')
		{
			if (temp->data[i][0] >= '1' && temp->data[i][0] <= '4')
				return (0);
			i++;
		}
		temp = temp->next;
	}
	return (1);
}

t_alst	*ft_open_lvl(t_env *d, t_alst *lst, int i)
{
	int		fd;
	char	*s;
	char	*s2;

	s = ft_strdup("levels/level");
	s2 = ft_strjoin(s, ft_itoa(i));
	free(s);
	s = ft_strjoin(s2, ".txt");
	lst = (t_alst *)malloc(sizeof(t_alst));
	lst->next = NULL;
	fd = open(s, O_RDONLY);
	if (fd < 0)
		exit(ft_error("Erreur file descriptor\n"));
	while (get_next_line(fd, &d->data) >= 1)
	{
		d->value = ft_strsplit(d->data, ',');
		lst = addlink(lst, d->value);
	}
	close(fd);
	return (lst);
}

void	map(t_env *d)
{
	t_alst	*lst;
	int		fd;
	int		i;

	i = 1;
	d->l = NULL;
	while (i < 6)
	{
		lst = ft_open_lvl(d, lst, i);
		d->l = addlvl(d->l, lst);
		lst = NULL;
		i++;
	}
}

void	init2(t_env *d, GLFWwindow *window)
{
	int	i;

	i = 1;
	while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS
		&& glfwWindowShouldClose(window) == 0)
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		map_arene();
		map_raquet(d->x2);
		map_level(*d, d->l->begin_lvl);
		map_ball(*d);
		glfwSwapBuffers(window);
		glfwPollEvents();
		vitesse(d);
		d->k = casse_bric(*d, d->l->begin_lvl, d->k);
		i = next_lvl(d->l->begin_lvl);
		if (i != 0)
			d->l = d->l->next;
		if (d->y3 < -0.8 || d->l == NULL)
			exit(0);
		move(d, window);
	}
	glfwTerminate();
}

void	init(void)
{
	t_env		d;
	GLFWwindow	*window;

	d.x3 = 0;
	d.y3 = 0;
	d.j = -0.01;
	d.k = 0.01;
	if (!glfwInit())
		exit(ft_error("Initialisation OpenGL echoue\n"));
	map(&d);
	window = glfwCreateWindow(640, 480, "Arkanoid", NULL, NULL);
	if (window == NULL)
		exit(ft_error("Impossible d'ouvrir la fenetre\n"));
	glfwMakeContextCurrent(window);
	glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
	if (!window)
	{
		glfwTerminate();
		exit(ft_error("Initialisation OpenGL echoue\n"));
	}
	init2(&d, window);
}
