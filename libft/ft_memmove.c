/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:01:00 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:10:27 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*s;
	size_t	i;

	i = 0;
	s = (void *)malloc(sizeof(char *) * n);
	if ((char *)s == NULL)
		return (NULL);
	s = ft_memcpy(s, src, n);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)s)[i];
		i++;
	}
	free (s);
	return (dest);
}
