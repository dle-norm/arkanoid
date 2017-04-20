/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 16:40:46 by dle-norm          #+#    #+#             */
/*   Updated: 2015/05/02 11:45:09 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grosheader.h"

t_lvl	*addlvl(t_lvl *lvl, t_alst *begin_lvl)
{
	t_lvl	*new_lvl;
	t_lvl	*tmp;

	tmp = NULL;
	new_lvl = (t_lvl *)malloc(sizeof(t_lvl));
	new_lvl->next = NULL;
	new_lvl->begin_lvl = begin_lvl;
	if (!lvl)
		return (new_lvl);
	else
	{
		tmp = lvl;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_lvl;
	}
	return (lvl);
}

t_alst	*addlink(t_alst *alst, char **value)
{
	t_alst	*new_lst;
	t_alst	*temp;

	temp = NULL;
	new_lst = (t_alst *)malloc(sizeof(t_alst));
	new_lst->next = NULL;
	new_lst->data = value;
	if (!alst)
		alst = new_lst;
	else
	{
		temp = alst;
		while (temp->next)
			temp = temp->next;
		temp->next = new_lst;
		temp->data = value;
	}
	return (alst);
}
