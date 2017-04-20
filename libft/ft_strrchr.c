/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:18:06 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:15:19 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int counter;

	counter = ft_strlen(s);
	if (!s)
		return (NULL);
	while (counter != 0)
	{
		if (((char*)s)[counter] == (char)c)
			return ((char*)&s[counter]);
		counter--;
	}
	if (((char*)s)[counter] == (char)c)
		return ((char*)&s[counter]);
	return (NULL);
}
