/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:16:08 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:09:37 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	str = (void *)malloc(sizeof(char) * size);
	if ((char *)str == NULL)
		return (NULL);
	ft_memset(str, 0, size);
	return (str);
}
