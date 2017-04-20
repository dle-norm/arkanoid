/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moreonestrchr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 16:28:47 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:10:43 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_moreonestrchr(const char *s, int c)
{
	int counter;

	counter = 0;
	if (!s)
		return (NULL);
	while (s[counter])
	{
		if (((char*)s)[counter] == (char)c)
			return ((char*)&s[counter + 1]);
		counter++;
	}
	if (((char*)s)[counter] == (char)c)
		return ((char*)&s[counter + 1]);
	return (NULL);
}
