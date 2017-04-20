/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:57:36 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:12:19 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int counter;

	counter = 0;
	if (!s)
		return (NULL);
	while (s[counter])
	{
		if (((char*)s)[counter] == (char)c)
			return ((char*)&s[counter]);
		counter++;
	}
	if (((char*)s)[counter] == (char)c)
		return ((char*)&s[counter]);
	return (NULL);
}
