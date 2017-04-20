/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:05:57 by dle-norm          #+#    #+#             */
/*   Updated: 2015/04/07 09:42:35 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strsplit2(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			len++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	char			**str;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * ft_strsplit2(s, c) + 1);
	if (str == NULL)
		return (NULL);
	str[ft_strsplit2(s, c)] = 0;
	while (s[i])
	{
		len = 0;
		if (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c && s[i++])
			len++;
		if (s[i - len] != '\0' && s[i - len] != c)
			str[j++] = ft_strsub(s, (i - len), len);
	}
	return (str);
}
