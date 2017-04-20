/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:21:48 by dle-norm          #+#    #+#             */
/*   Updated: 2014/12/30 15:15:41 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int			i;
	int			j;

	j = 0;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s2[i] == '\0')
		return ((char *)&s1[j]);
	while (s1[j] != '\0')
	{
		if (s2[i] == s1[j])
		{
			while (s1[j + i] == s2[i] && s2[i] != '\0' && s1[j + i] != '\0')
				i++;
			if (s2[i] == '\0')
				return ((char *)&s1[j]);
			i = 0;
		}
		j++;
	}
	return (NULL);
}
