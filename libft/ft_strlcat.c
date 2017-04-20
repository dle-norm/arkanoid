/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:51:23 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:13:42 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *str, size_t size)
{
	size_t dest_len;
	size_t str_len;
	size_t i;

	i = 0;
	dest_len = ft_strlen(dest);
	str_len = ft_strlen(str);
	if (dest_len > size)
		return (str_len + size);
	while (str[i] != '\0' && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = str[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + str_len);
}
