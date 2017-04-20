/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:12:24 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:10:01 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (s1 == NULL && s2 == NULL)
		return (0);
	else if (s1 == NULL)
		return (-1);
	else if (s2 == NULL)
		return (1);
	i = 0;
	while (i < n)
	{
		if (((char *)s2)[i] != ((char *)s1)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
