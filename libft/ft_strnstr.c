/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:22:18 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:15:11 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;

	j = 0;
	i = 0;
	if (s1[i] == '\0')
		return (NULL);
	if (s2[i] == '\0')
		return ((char *)&s1[j]);
	while (s1[j] != '\0' && j < n)
	{
		if (s2[i] == s1[j])
		{
			while (s1[j + i] == s2[i] && s2[i] != '\0' && s1[j + i] != '\0'
					&& (j + i) < n)
				i++;
			if (s2[i] == '\0')
				return ((char *)&s1[j]);
			i = 0;
		}
		j++;
	}
	return (NULL);
}
