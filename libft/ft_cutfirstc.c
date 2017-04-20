/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cutfirstc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 16:07:37 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:18:21 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cutfirstc(const char *s, int c)
{
	int		counter;
	char	*dup;

	counter = ft_strlen(s);
	if (!s)
		return (NULL);
	while (counter != 0)
	{
		if (((char*)s)[counter] == (char)c)
		{
			((char*)s)[counter] = '\0';
			dup = ft_strdup((char *)s);
			return (dup);
		}
		counter--;
	}
	if (((char*)s)[counter] == (char)c)
	{
		((char*)s)[counter] = '\0';
		dup = ft_strdup((char *)s);
		return (dup);
	}
	return (NULL);
}
