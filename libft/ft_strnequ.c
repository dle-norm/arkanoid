/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:22:54 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:14:53 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 == NULL)
		return (0);
	if (s2 == NULL)
		return (0);
	i = (ft_strncmp(s1, s2, n) == 0 ? 1 : 0);
	return (i);
}
