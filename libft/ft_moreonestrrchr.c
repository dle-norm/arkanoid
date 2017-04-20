/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moreonestrrschr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 16:28:11 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:10:53 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_moreonestrrchr(const char *s, int c)
{
	int counter;

	counter = ft_strlen(s);
	if (!s)
		return (NULL);
	while (counter != 0)
	{
		if (((char*)s)[counter] == (char)c)
			return ((char*)&s[counter + 1]);
		counter--;
	}
	if (((char*)s)[counter] == (char)c)
		return ((char*)&s[counter + 1]);
	return (NULL);
}
