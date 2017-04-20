/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:29:53 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:14:44 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	if (s2[i] == '\0')
	{
		while (i < n)
		{
			s1[i] = '\0';
			i++;
		}
	}
	return (s1);
}
