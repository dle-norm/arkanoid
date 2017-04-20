/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:21:20 by dle-norm          #+#    #+#             */
/*   Updated: 2015/01/02 17:11:24 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim2(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		return (s);
	while ((s[i] == '\n' || s[i] == '\t' || s[i] == ' ') && s[i] != '\0')
		i++;
	return (&s[i]);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		j;

	if (s == NULL)
		return (NULL);
	s = ft_strtrim2((char *)s);
	i = (ft_strlen(s));
	while ((((char *)s)[i] == '\n' || ((char *)s)[i] == '\t' ||
				((char *)s)[i] == ' ' || ((char *)s)[i] == '\0') && i != 0)
		i--;
	str = (char *)malloc(sizeof(char) * 1 + i);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (j != (i + 1) && i != 0)
	{
		str[j] = ((char *)s)[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
