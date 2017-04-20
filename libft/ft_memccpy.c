/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:53:51 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:09:45 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	j;

	j = 0;
	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (NULL);
	if (n == 0)
		return (NULL);
	while (j < n)
	{
		((char *)dest)[j] = ((char *)src)[j];
		j++;
		if (((char *)src)[j - 1] == (char)c)
			return (&((char *)dest)[j]);
	}
	((char *)dest)[j] = '\0';
	return (NULL);
}
