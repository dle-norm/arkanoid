/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/30 16:44:29 by dle-norm          #+#    #+#             */
/*   Updated: 2015/01/02 17:02:53 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*tmp;

	if ((*f) == NULL)
		return (NULL);
	if (lst == NULL)
		return (NULL);
	newlst = ft_lstnew(lst->content, lst->content_size);
	tmp = (*f)(lst);
	newlst = tmp;
	while (lst)
	{
		tmp = (*f)(lst);
		newlst->next = tmp;
		lst = lst->next;
	}
	return (newlst);
}
